/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:36:50 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/05 18:19:39 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*converter;

	if (s == NULL)
		return (NULL);
	converter = (char *)s;
	while (n--)
	{
		*(converter++) = c;
	}
	return (s);
}
