/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 18:02:59 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/27 18:03:00 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int     ft_printf_p(void *p)
{
    long long unsigned  adress;
    int len;

    adress = (long long unsigned)p;
    len = count(adress);
    ft_putstr_fd("0x", 1);
    if (adress == 0)
        ft_putchar_fd('0', 1);
    ft_putnbr_base(adress, "0123456789abcdef");
    return (len);
}
