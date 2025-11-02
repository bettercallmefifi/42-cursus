/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:11:05 by feel-idr          #+#    #+#             */
/*   Updated: 2025/10/20 11:36:25 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	h;
	size_t			i;

	i = 0;
	h = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == h)
			return ((char *)s + i);
		i++;
	}
	if (h == '\0')
		return ((char *)&s[i]);
	return (0);
}

// int	main()
// {
// 	char s[] = "ferdaous";
// 	char *str = ft_strchr(s,'h');
// 	if(!str)
// 		return 0;
// 	printf("%s\n",str);
// 	return (0);
// }