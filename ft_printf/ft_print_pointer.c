/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:39:23 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/08 18:55:36 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ptr_hexa(unsigned long long ptr)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (ptr >= 16)
		count += ptr_hexa(ptr / 16);
	count += ft_print_putchar(base[ptr % 16], 1);
	return (count);
}

int	ft_print_pointer(unsigned long long ptr)
{
	if (!ptr)
		return (ft_print_putstr("(nil)", 1));
	return (ft_print_putstr("0x", 1) + ptr_hexa(ptr));
}
