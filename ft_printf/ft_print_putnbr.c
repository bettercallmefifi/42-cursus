/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:10:56 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/08 18:28:49 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_nb(int nb)
{
	int	i;

	i = 0;
	while (nb)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	ft_print_putnbr(int nb)
{
	long long int	nbr;
	int				i;

	nbr = nb;
	i = len_nb(nb);
	if (nbr == 0)
		i++;
	if (nbr < 0)
	{
		ft_print_putchar('-', 1);
		nbr = -nbr;
		i++;
	}
	if (nbr >= 10)
	{
		ft_print_putnbr(nbr / 10);
		ft_print_putchar(nbr % 10 + '0', 1);
	}
	if (nbr < 10)
		ft_print_putchar(nbr % 10 + '0', 1);
	return (i);
}
