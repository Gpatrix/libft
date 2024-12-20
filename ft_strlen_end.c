/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 14:37:07 by lchauvet          #+#    #+#             */
/*   Updated: 2024/12/20 14:39:39 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_end(char *str, char *end)
{
	size_t	len;

	len = 0;
	while (*str)
	{
		if (one_of_str(*str, end))
			return (len);
		len++;
		str++;
	}
	return (len);
}
