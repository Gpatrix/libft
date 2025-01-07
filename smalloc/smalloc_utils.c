/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalloc_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:34:33 by lchauvet          #+#    #+#             */
/*   Updated: 2025/01/07 11:57:24 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "smalloc.h"

t_smalloc	*smalloc_new(void *ptr)
{
	t_smalloc	*smalloc;

	smalloc = malloc(sizeof(t_smalloc));
	if (!smalloc)
		return (NULL);
	smalloc->ptr = ptr;
	smalloc->prev = NULL;
	smalloc->next = NULL;
	return (smalloc);
}

bool	smalloc_add_last(short arena, t_smalloc *new)
{
	t_smalloc	*last;
	t_smalloc	**lst;

	if (!new)
		return (EXIT_FAILURE);
	lst = get_smalloc(arena);
	if (!*lst)
		return (*lst = new, EXIT_SUCCESS);
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
	new->prev = last;
	return (EXIT_SUCCESS);
}

t_smalloc	*_smalloc_chr(short arena, void *ptr)
{
	t_smalloc	*smalloc;

	smalloc = *get_smalloc(arena);
	if (!smalloc)
		return (NULL);
	while (smalloc)
	{
		if (smalloc->ptr == ptr)
			return (smalloc);
		smalloc = smalloc->next;
	}
	return (NULL);
}
