/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:49:22 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/08 18:49:23 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_unsigned(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		i++;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	ft_print_unsigned(unsigned int n)
{
	int	nbr;
	int	i;

	i = 0;
	nbr = n;
	i = len_unsigned(n);
	if (n < 10)
	{
		nbr = (n % 10) + '0';
		ft_print_putchar(nbr, 1);
	}
	else
	{
		ft_print_unsigned(n / 10);
		ft_print_unsigned(n % 10);
	}
	return (i);
}
