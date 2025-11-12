#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>
#include <fcntl.h>


#ifndef	BUFFER_SIZE
# define BUFFER_SIZE 5

#endif

char	*get_next_line(int	fd);
char	*ft_read_file(int fd, char *line_of_file);
char	*ft_strdup(const char *s);
int	ft_stock_len(char *stock);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_calloc(int count, int size);
int		ft_strchr(const char *s, int c);

#endif