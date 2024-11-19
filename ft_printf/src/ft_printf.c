/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:14:02 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/25 10:28:53 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pre_printf_ptr(uintptr_t ptr)
{
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
		return (ft_printf_str("0x") + ft_printf_ptr(ptr));
}

int	ft_conversions(char c, int char_counter, va_list arg_ptr)
{
	if (c == 'c')
		char_counter += ft_printf_char(va_arg(arg_ptr, int));
	if (c == 's')
		char_counter += ft_printf_str(va_arg(arg_ptr, char *));
	else if (c == 'p')
		char_counter += pre_printf_ptr(va_arg(arg_ptr, uintptr_t));
	else if (c == 'd')
		char_counter += ft_printf_int(va_arg(arg_ptr, int));
	else if (c == 'i')
		char_counter += ft_printf_int(va_arg(arg_ptr, int));
	else if (c == 'u')
		char_counter += ft_printf_ubase(va_arg(arg_ptr, unsigned int), INT);
	else if (c == 'x')
		char_counter += ft_printf_ubase(va_arg(arg_ptr, unsigned int), HEXL);
	else if (c == 'X')
		char_counter += ft_printf_ubase(va_arg(arg_ptr, unsigned int), HEXH);
	else if (c == '%')
		char_counter += ft_printf_char('%');
	return (char_counter);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg_ptr;
	int		char_counter;

	va_start(arg_ptr, s);
	char_counter = 0;
	s--;
	while (*++s != '\0')
	{
		if (*s != '%')
		{
			ft_putchar_fd(*s, 1);
			char_counter++;
			continue ;
		}
		s++;
		char_counter = ft_conversions(*s, char_counter, arg_ptr);
	}
	return (char_counter);
}
