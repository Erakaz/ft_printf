/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 17:21:04 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/25 17:39:23 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	checkchar(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-')
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

static void	ft_writenbr(int nbr, int baselen, char *base)
{
	long long int		lnbr;

	lnbr = nbr;
	if (lnbr < 0)
	{
		lnbr = -lnbr;
		ft_putchar_fd('-', 1);
	}
	if (lnbr >= baselen)
		ft_writenbr(lnbr / baselen, baselen, base);
	ft_putchar_fd(base[lnbr % baselen], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			baselen;

	baselen = ft_strlen(base);
	if (baselen < 2)
		return ;
	if (checkchar(base) == 1)
		return ;
	ft_writenbr(nbr, baselen, base);
}