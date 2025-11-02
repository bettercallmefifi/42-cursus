/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:44:46 by feel-idr          #+#    #+#             */
/*   Updated: 2025/10/20 11:35:50 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src;
	unsigned char	*str;
	size_t			i;

	i = 0;
	src = (unsigned char *)s2;
	str = (unsigned char *)s1;
	while (i < n)
	{
		if (str[i] != src[i])
			return (str[i] - src[i]);
		i++;
	}
	return (0);
}
