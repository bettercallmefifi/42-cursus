#include "get_next_line.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc (strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_read_file(int fd, char *line_of_file)
{
	char	*line_added;
	int		i;

	if (!line_of_file)
		line_of_file = ft_calloc(1, 1);
	line_added = ft_calloc(BUFFER_SIZE + 1, 1);
	i = 1;
	while (i > 0)
	{
		i = read(fd, line_added, BUFFER_SIZE);
		if ((line_of_file[0] == 0 && line_added[0] == 0) || i < 0)
		{
			free(line_added);
			free(line_of_file);
			return (0);
		}
		line_added[i] = '\0';
		line_of_file = ft_strjoin(line_of_file, line_added);
		if (ft_strchr(line_added, '\n') >= 0)
			break;
	}
	free(line_added);
	return (line_of_file);
}
char	*get_next_line(int fd)
{
	static char *stock;
	char		*line;
	char		*tmp;

	if (fd < 0 || BUFFER_SIZE == 0)
		return (0);
	stock = ft_read_file(fd, stock);
	if (!stock)
	{
		free(stock);
		return (NULL);
	}
	if (ft_strchr(stock, '\n') >= 0)
	{
		line = ft_substr(stock, 0, ft_strchr(stock, '\n'));
		tmp = ft_substr(stock, ft_strchr(stock, '\n') + 1, ft_stock_len(stock));
		free(stock);
		return (line);
	}
	line = ft_strdup(stock);
	free(stock);
	stock = NULL;
	return (line);
}

int main(int ac, char **av)
{

	(void)ac;
	int fd = open(av[1], O_RDONLY);
	printf("%s", get_next_line(fd));
	return (0);
}