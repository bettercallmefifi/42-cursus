/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:17:47 by feel-idr          #+#    #+#             */
/*   Updated: 2025/10/16 12:04:36 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

//  int main()
//  {
// 	int a = 5;
// 	void *ptr = (char *)&a;
// 	void *ptr1 = ptr + 1;
// 	ptr = ft_memset(ptr, 57, 1);
// 	ptr1 = ft_memset(ptr1, 5, 1);
// 	printf("%d\n", a);
//  }