/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:52:41 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/19 16:40:44 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		beginning_s1;
	int		end_s1;
	char	*trimmed_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(s1));
	beginning_s1 = 0;
	end_s1 = ft_strlen(s1) - 1;
	while (*(s1 + beginning_s1) && ft_strchr(set, *(s1 + beginning_s1)))
		beginning_s1++;
	while (end_s1 > 0 && ft_strchr(set, *(s1 + end_s1)))
		end_s1--;
	if (beginning_s1 > end_s1)
		return (ft_strdup(""));
	trimmed_str = malloc((ft_strlen(s1) - beginning_s1) - (ft_strlen(s1)
				- end_s1) + 2);
	if (trimmed_str == NULL)
		return (NULL);
	ft_strlcpy(trimmed_str, s1 + beginning_s1, (ft_strlen(s1) - beginning_s1)
		- (ft_strlen(s1) - end_s1) + 2);
	return (trimmed_str);
}
