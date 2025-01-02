/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:20:01 by lchauvet          #+#    #+#             */
/*   Updated: 2025/01/02 13:15:03 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "smalloc.h"

t_smalloc	**get_smalloc(void)
{
	static t_smalloc	*lst = NULL;

	return (&lst);
}

void	*smalloc(size_t __size)
{
	void	*ptr;

	ptr = malloc(__size);
	if (!ptr)
		smalloc_end(EXIT_FAILURE);
	if (smalloc_add_last(get_smalloc(), smalloc_new(ptr)))
		smalloc_end(EXIT_FAILURE);
	return (ptr);
}