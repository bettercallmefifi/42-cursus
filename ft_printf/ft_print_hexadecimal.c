/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:32:19 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/08 18:38:45 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexadecimal(unsigned long long nbr, int flag)
{
	char	*base;
	int		count;

	count = 0;
	if (flag)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nbr >= 16)
		count += ft_print_hexadecimal(nbr / 16, flag);
	count += ft_print_putchar(base[nbr % 16], 1);
	return (count);
}
