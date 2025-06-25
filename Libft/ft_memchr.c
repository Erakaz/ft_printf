/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:12:02 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/18 17:12:40 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*convert;
	size_t	i;

	i = 0;
	convert = (char *)s;
	while (i < n)
	{
		if (convert[i] == (char)c)
			return ((char *)&convert[i]);
		i++;
	}
	return (NULL);
}
