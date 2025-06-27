/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 17:25:14 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/27 17:25:15 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned int ft_printf_unsigned(unsigned int u, char *base)
{
    int len;

    len = count(u);
    ft_putnbr_unsigned(u, base);
    return (len);
}
