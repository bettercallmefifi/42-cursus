#include <libft.h>
//#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (fd < 0 || !s)
		return;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int main()
// {
// 	ft_putstr_fd("ferdaous",0);
// 	write(1,"\n",1);
// 	return (0);
// }