/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 15:32:37 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/19 16:40:16 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dest_len;
	size_t		src_len;

	src_len = ft_strlen(src);
	if (dst == NULL && size == 0)
		return (src_len);
	dest_len = ft_strlen(dst);
	if (dest_len >= size)
		return (src_len + size);
	else
		size -= dest_len;
	ft_strlcpy(dst + dest_len, src, size);
	return (dest_len + src_len);
}
