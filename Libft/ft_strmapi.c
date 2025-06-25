/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 18:17:10 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/19 14:38:16 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	dest = malloc(ft_strlen(s) + 1);
	if (dest == NULL)
		return (NULL);
	if (f == NULL)
	{
		ft_strlcpy(dest, s, ft_strlen(s) + 1);
		return (dest);
	}
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
