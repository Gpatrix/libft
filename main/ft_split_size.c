/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 09:22:09 by lchauvet          #+#    #+#             */
/*   Updated: 2024/12/18 09:01:35 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_split_size(char **array)
{
	int	size;

	if (!array || !*array)
		return (0);
	size = 0;
	while (array[size])
		size++;
	return (size);
}
