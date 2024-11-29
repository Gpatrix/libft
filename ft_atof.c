/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:43:21 by lchauvet          #+#    #+#             */
/*   Updated: 2024/11/29 10:20:29 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double	get_double(char *str)
{
	double	val;
	int		afterdot;
	double	scale;

	val = 0;
	afterdot = 0;
	scale = 1;
	while (*str)
	{
		if (afterdot)
		{
			scale /= 10;
			val += (*str - '0') * scale;
		}
		else
		{
			if (*str == '.')
				afterdot = 1;
			else
				val = val * 10.0 + (*str - '0');
		}
		str++;
	}
	return (val);
}

double	ft_atof(char *str)
{
	int		neg;

	neg = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	return (get_double(str) * neg);
}
