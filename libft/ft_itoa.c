/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:05:45 by feel-idr          #+#    #+#             */
/*   Updated: 2025/10/24 11:14:45 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fifi_print(unsigned int nb, int i, int flag)
{
	char	*rst;

	if (nb == 0)
	{
		rst = malloc (sizeof(char) * 2);
		if (!rst)
			return (NULL);
		rst[0] = '0';
		rst[1] = '\0';
		return (rst);
	}
	rst = malloc (sizeof(char) * (i + 1));
	if (!rst)
		return (NULL);
	rst[i] = '\0';
	i--;
	if (flag == -1)
		rst[0] = '-';
	while (nb)
	{
		rst[i] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
	return (rst);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	int				nbl;
	int				len;
	int				flag;

	len = 0;
	flag = 1;
	if (n < 0)
	{
		flag = -1;
		len++;
		nbr = (unsigned int)(-n);
	}
	else
		nbr = (unsigned int)n;
	nbl = nbr;
	while (nbl)
	{
		nbl = nbl / 10;
		len++;
	}
	return (fifi_print(nbr, len, flag));
}
