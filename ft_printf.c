/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:51:14 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/25 16:51:16 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
    va_list ap;
    int     len;
    int     i;

    i = 0;
    va_start(ap, format);
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
            i++;
        if (format[i] == 'c')
        {
            char c = (char)va_arg(ap, int);
            len += ft_printf_c(c);
        }
        else if (format[i] == 's')
        {
            char *s = va_arg(ap, char*);
            len += ft_printf_s(s);
        }
        else if (format[i] == '%')
        {
            len += ft_printf_c('%');
        }
        i++;
    }
    return (len);
}