#include "ft_printf.h"

int	ft_print_putchar(char c, int fd)
{
	
	if (fd < 0)
		return (0);
	write(1, &c, 1);
	return (1);
}