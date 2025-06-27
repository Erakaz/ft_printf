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
    len = 0;
    va_start(ap, format);
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
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
            else if (format[i] == 'i' || format[i] == 'd')
            {
                int i = va_arg(ap, int);
                len += ft_printf_base(i, "0123456789");
            }
            else if (format[i] == 'u')
            {
                unsigned int u = va_arg(ap, unsigned int);
                len += ft_printf_unsigned(u, "0123456789");
            }
            else if (format[i] == 'x')
            {
                unsigned int x = va_arg(ap, unsigned int);
                len += ft_printf_unsigned(x, "0123456789abcdef");
            }
            else if (format[i] == 'X')
            {
                unsigned int X = va_arg(ap, unsigned int);
                len += ft_printf_unsigned(X, "0123456789ABCDEF");
            }
            else if (format[i] == 'p')
            {
                void *p = va_arg(ap, void*);
                len += ft_printf_p(p);
            }
            else if (format[i] == '%')
            {
                len += ft_printf_c('%');
            }
        }
        else
            len += ft_printf_c(format[i]);
        i++;
    }
    va_end(ap);
    return (len);
}