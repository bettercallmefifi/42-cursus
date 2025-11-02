/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:42:38 by feel-idr          #+#    #+#             */
/*   Updated: 2025/10/20 11:37:00 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (size == 0 && !dest)
		return (srclen);
	if (size == 0)
		return (srclen);
	if (destlen >= size)
		return (srclen + size);
	while (src[i] != '\0' && (destlen + i) < size - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (srclen + destlen);
}

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

// int main()
// {
// 	char dest[100];
// 	dest[0] = '\0';
// 	strlcat(dest, "lorem ipsum dolor sit amet", 5);
// 	printf("%s", dest);
// 	dest[0] = '\0';
// 	ft_strlcat(dest, "lorem ipsum dolor sit amet", 5);
// 	printf("%s", dest);
// }