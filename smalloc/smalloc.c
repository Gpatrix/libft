/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:20:01 by lchauvet          #+#    #+#             */
/*   Updated: 2025/01/07 11:55:23 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "smalloc.h"

t_smalloc	**get_smalloc(short arena)
{
	static t_smalloc	*lst[MAX_ARENA] = {NULL};

	return (&(lst[arena]));
}

void	smalloc_register(short arena, void *ptr)
{
	smalloc_add_last(arena, smalloc_new(ptr));
}

void	*smalloc(short arena, size_t __size)
{
	void	*ptr;

	ptr = malloc(__size);
	if (!ptr)
		smalloc_end(EXIT_FAILURE);
	if (smalloc_add_last(arena, smalloc_new(ptr)))
		smalloc_end(EXIT_FAILURE);
	return (ptr);
}
