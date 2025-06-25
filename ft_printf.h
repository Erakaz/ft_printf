/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:49:39 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/25 11:49:43 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "Libft/libft.h"
# include <stdarg.h>

int ft_printf_c(const char c);
int ft_printf_s(const char *s);
int ft_printf_base(int d, char *base);
void ft_putnbr_base(int nbr, char *base);
#endif