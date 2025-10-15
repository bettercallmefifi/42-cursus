#include <libft.h>
//#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	ft_putchar_fd('c',0);
// 	write(1,"\n",1);
// 	return (0);
// }