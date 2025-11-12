#include "get_next_line.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>
#include <fcntl.h>

char	*ft_calloc(int count, int size)
{
	char	*allocat;
	int		total;
	int		i;

	total = count * size;
	allocat = (char *) malloc(total);
	if (allocat == 0)
		return (0);
	i = 0;
	while (total-- > 0)
		allocat[i++] = 0;
	return (allocat);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	j;
	size_t	k;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	size = strlen(s1) + strlen(s2);
	j = 0;
	k = 0;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	while (s1[j])
	{
		str[j] = s1[j];
		j++;
	}
	while (s2[k])
		str[j++] = s2[k++];
	str[j] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_len = strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	s1 = (char *)malloc(len + 1);
	if (s1 == NULL)
		return (NULL);
	while (i < len && s[start + i])
	{
		s1[i] = s[start + i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	ft_strchr(const char *s, int c)
{
	int	lns;

	lns = 0;
	while (s[lns] && s[lns] != c)
		lns++;
	if (s[lns] == c)
		return (lns);
	return (-1);
}

int	ft_stock_len(char *stock)
{
	int	i;

	i = 0;
	while(stock && stock[i])
		i++;
	return (i);
}