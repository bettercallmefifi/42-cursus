/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:20:18 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/08 18:43:03 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_printf(const char *ptr, va_list list)
{
	int	count;

	count = 0;
	if (*ptr == 'c')
		count += ft_print_putchar(va_arg(list, int), 1);
	else if (*ptr == 'i' || *ptr == 'd')
		count += ft_print_putnbr(va_arg(list, int));
	else if (*ptr == 's')
		count += ft_print_putstr(va_arg(list, char *), 1);
	else if (*ptr == '%')
		count += ft_print_putchar('%', 1);
	else if (*ptr == 'u')
		count += ft_print_unsigned(va_arg(list, unsigned int));
	else if (*ptr == 'p')
		count += ft_print_pointer((unsigned long long)va_arg(list, void *));
	else if (*ptr == 'x' )
		count += ft_print_hexadecimal(va_arg(list, unsigned int), 0);
	else if (*ptr == 'X')
		count += ft_print_hexadecimal(va_arg(list, unsigned int), 1);
	return (count);
}
