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

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "Libft/libft.h"
# include <stdarg.h>

int ft_printf_c(const char c);
int ft_printf_s(char *s);
int ft_printf_base(int d, char *base);
void ft_putnbr_base(int nbr, char *base);
int ft_printf(const char *format, ...);
#endif