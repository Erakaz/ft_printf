/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:20:08 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/19 12:10:04 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count(long long int n)
{
	unsigned int	count;

	count = 0;
	if (n < 0)
	{
		count += 1;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	count++;
	return (count);
}

char	*ft_itoa(int n)
{
	long long int	lln;
	unsigned int	counter;
	char			*n_string;

	lln = n;
	counter = count(n);
	n_string = (char *)malloc(counter + 1);
	if (n_string == NULL)
		return (NULL);
	if (lln == 0)
		n_string[0] = '0';
	else if (lln < 0)
		lln = -lln;
	n_string[counter] = '\0';
	while (counter-- > 0)
	{
		n_string[counter] = (lln % 10) + '0';
		lln /= 10;
	}
	if (n < 0)
		n_string[0] = '-';
	return (n_string);
}
