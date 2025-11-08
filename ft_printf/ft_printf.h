#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdint.h>
int		ft_printf(const char *format, ...);
int		ft_print_putchar(int c);
int		ft_print_putstr(char *str);
void	ft_print_putnbr(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hexadecimal(unsigned long long nbr, int n);
int		ft_print_pointer(uintptr_t ptr);
#endif