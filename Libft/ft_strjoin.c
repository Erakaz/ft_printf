/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:46:53 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/18 17:01:39 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final_str;
	size_t	final_size;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	final_size = s1_len + s2_len + 1;
	final_str = (char *)malloc(final_size);
	if (final_str == NULL)
		return (NULL);
	ft_strlcpy(final_str, s1, final_size);
	ft_strlcpy(final_str + s1_len, s2, final_size - s1_len);
	return (final_str);
}
