/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:56:42 by lchauvet          #+#    #+#             */
/*   Updated: 2024/12/12 09:21:32 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_split_free(char **array)
{
	uint16_t	index;

	if (!array || !*array)
		return ;
	index = 0;
	while (array[index])
		free(array[index++]);
	free(array);
}