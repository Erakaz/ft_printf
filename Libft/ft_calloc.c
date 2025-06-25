/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 12:16:00 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/19 17:12:38 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr_to_mem;
	size_t	total_size;

	total_size = nmemb * size;
	if (size != 0 && (total_size / size) < nmemb)
		return (NULL);
	ptr_to_mem = malloc(total_size);
	if (ptr_to_mem == NULL)
		return (NULL);
	ft_bzero(ptr_to_mem, (total_size));
	return (ptr_to_mem);
}
