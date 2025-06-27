/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 17:33:47 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/27 17:33:49 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static unsigned int	checkchar(char *base)
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

static void	ft_writenbr(unsigned int nbr, unsigned int baselen, char *base)
{
	long long unsigned int		lnbr;

	lnbr = nbr;
	if (lnbr >= baselen)
		ft_writenbr(lnbr / baselen, baselen, base);
	ft_putchar_fd(base[lnbr % baselen], 1);
}

void	ft_putnbr_unsigned(unsigned nbr, char *base)
{
	unsigned int			baselen;

	baselen = ft_strlen(base);
	if (baselen < 2)
		return ;
	if (checkchar(base) == 1)
		return ;
	ft_writenbr(nbr, baselen, base);
}
