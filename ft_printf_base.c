/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbelfki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:17:47 by zbelfki           #+#    #+#             */
/*   Updated: 2025/06/25 17:39:44 by zbelfki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf_base(int d, char *base)
{
    int len;

    len = count(d);
    ft_putnbr_base(d, base);
    return (len);
}
