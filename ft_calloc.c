/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:46:46 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/22 15:54:46 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new_array;

	if ((unsigned long)(nmemb * size) > INT_MAX)
		return (NULL);
	new_array = malloc(nmemb * size);
	if (!new_array)
		return (NULL);
	ft_bzero(new_array, nmemb * size);
	return (new_array);
}
