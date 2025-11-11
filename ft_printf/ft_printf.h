/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:52:03 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/08 18:40:59 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		ft_check_printf(const char *ptr, va_list list);
int		ft_print_putchar(int c, int fd);
int		ft_print_putstr(char *str, int fd);
int		ft_print_putnbr(int nb);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hexadecimal(unsigned long long nbr, int flag);
int		ft_print_pointer(unsigned long long ptr);
#endif