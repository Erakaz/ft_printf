/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:59:08 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/13 15:08:19 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		size_d;

	size_d = ft_strlen(s) + 1;
	d = (char *)malloc(size_d);
	if (d == NULL)
		return (NULL);
	ft_strlcpy(d, s, size_d);
	return (d);
}
