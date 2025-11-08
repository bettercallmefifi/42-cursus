#include "ft_printf.h"

int	ft_printf(const char *forma, ...)
{
	char	*tab;
	int		i;
	int		count;
	va_list	*list;

	tab = (char *)forma;
	i = 0;
	count = 0;
	va_start(list, forma);
	while (tab[i])
	{
		if (tab[i] != '%')
			count += ft_ptint_putchar(tab[i]);
		else if (tab[i] == '%')
		{
			i++;
			count += ft_check_print(&tab[i], list);
		}
		i++;
	}
	va_end(ptr);
	return (count);
}