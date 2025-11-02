/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:46:30 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/01 20:13:48 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
		{
			count++;
			j = 1;
		}
		if (s[i] == c)
			j = 0;
		i++;
	}
	return (count);
}

static void	*free_res(char **result)
{
	int	j;

	j = 0;
	while (result[j] != NULL)
	{
		free(result[j]);
		j++;
	}
	free(result);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int			i;
	char		**res;
	const char	*debut;

	i = 0;
	if (s == NULL)
		return (NULL);
	res = (char **)ft_calloc(count_word(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			break ;
		debut = s;
		while (*s && *s != c)
			s++;
		res[i++] = ft_substr(debut, 0, s - debut);
		if (res[i - 1] == NULL)
			return (free_res(res));
	}
	res[i] = NULL;
	return (res);
}

// int main()
// {
// 	char **arr = ft_split("Hello freaks 1337 !!!!! ! ", ' ');
// 	int i;
// 	for (i = 0; arr[i]; i++)
// 		printf("%s\n", arr[i]);
// 	for (int j = 0; arr[j]; j++)
// 		free(arr[j]);
// 	free(arr);
// }