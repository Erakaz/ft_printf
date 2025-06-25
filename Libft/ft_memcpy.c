/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:56:47 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/19 17:12:28 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*converter_s;
	char	*converter_d;

	i = 0;
	converter_s = (char *)src;
	converter_d = (char *)dest;
	while (i < n)
	{
		converter_d[i] = converter_s[i];
		i++;
	}
	return (dest);
}
