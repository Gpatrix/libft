/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:03:21 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/25 12:17:57 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *s)
{
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}

int	ft_printf_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printf_int(int n)
{
	int	counter;

	counter = 1;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			counter++;
			n = -n;
		}
		if (n >= 10)
			counter += ft_printf_int(n / 10);
		ft_putchar_fd((n % 10) + '0', 1);
		return (counter);
	}
}

int	ft_printf_ubase(unsigned int n, char *base)
{
	int	counter;

	counter = 1;
	if (n >= (unsigned int)ft_strlen(base))
		counter += ft_printf_ubase(n / (int)ft_strlen(base), base);
	ft_putchar_fd(base[n % (int)ft_strlen(base)], 1);
	return (counter);
}

int	ft_printf_ptr(size_t n)
{
	int		counter;
	char	*base;

	base = HEXL;
	counter = 1;
	if (n >= ft_strlen(base))
		counter += ft_printf_ptr(n / ft_strlen(base));
	ft_putchar_fd(base[n % ft_strlen(base)], 1);
	return (counter);
}
