/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:34:26 by feel-idr          #+#    #+#             */
/*   Updated: 2025/10/17 11:44:17 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	h;
	size_t			i;

	str = (unsigned char *)s;
	h = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == h)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char str[] = "ferdaous";
// 	char *s = (char *)ft_memchr(str, 'h',8);
// 	if (!s)
// 		return (0);
// 	printf("%s\n", s);
// 	return (0);
// }