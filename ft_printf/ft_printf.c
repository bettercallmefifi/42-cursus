/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:11:06 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/08 18:56:21 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *forma, ...)
{
	char	*tab;
	int		i;
	int		count;
	va_list	list;

	tab = (char *)forma;
	i = 0;
	count = 0;
	va_start(list, forma);
	while (tab[i])
	{
		if (tab[i] != '%')
			count += ft_print_putchar(tab[i], 1);
		else if (tab[i] == '%' && tab[i + 1])
		{
			i++;
			count += ft_check_printf(&tab[i], list);
		}
		i++;
	}
	va_end(list);
	return (count);
}
