#include "ft_printf.h"

int	ft_check_print(const char *ptr, va_list list)
{
	int count;

	count = 0;
	if (*ptr == 'c')
		count += ft_print_putchar(va_arg(ptr, int));
	else if (*ptr == 'i' || *ptr == 'd')
		count += ft_print_putnbr(va_arg(ptr, int));
	else if (*ptr == 's')
		count += ft_print_putstr(va_arg(ptr, char *), &count);
	else if (*ptr == '%')
		count += ft_print_putchar('%');
	else if (*ptr == 'u')
		count += ft_print_unsigned(va_arg(ptr, unsigned int));
	else if (*ptr == 'p')
		count += ft_print_pointer((unsigned long long)(ptr, void *));
}