/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 09:51:23 by feel-idr          #+#    #+#             */
/*   Updated: 2025/10/24 11:12:38 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			rest[34];
	long long int	nbr;
	int				i;

	i = 0;
	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = nbr * -1;
	}
	while (nbr >= 10)
	{
		rest[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i++;
	}
	if (nbr <= 9)
		rest[i] = nbr + '0';
	while (i >= 0)
		write(fd, &rest[i--], 1);
}
