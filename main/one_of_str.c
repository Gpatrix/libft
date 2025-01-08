/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_of_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:50:30 by lchauvet          #+#    #+#             */
/*   Updated: 2025/01/08 14:00:23 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	one_of_str(const char c, const char *str)
{
	while (*str)
	{
		if (c == *str)
			return (true);
		str++;
	}
	return (false);
}
