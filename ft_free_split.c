/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:56:42 by lchauvet          #+#    #+#             */
/*   Updated: 2024/12/10 09:10:02 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_split(char **array)
{
	uint16_t	index;

	if (!array || !*array)
		return ;
	index = 0;
	while (array[index])
		free(array[index++]);
	free(array);
}
