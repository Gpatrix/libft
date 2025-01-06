/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalloc_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:34:33 by lchauvet          #+#    #+#             */
/*   Updated: 2025/01/06 09:43:43 by lchauvet         ###   ########.fr       */
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

static t_smalloc	*smalloc_chr(short arena, void *ptr)
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

void	smalloc_free(short arena, void *ptr)
{
	t_smalloc	*smalloc;
	t_smalloc	**tmp_smalloc;

	smalloc = smalloc_chr(arena, ptr);
	if (!smalloc)
		return ;
	if (smalloc == *get_smalloc(arena))
	{
		tmp_smalloc = get_smalloc(arena);
		if (smalloc->next)
		{
			(*tmp_smalloc) = (*tmp_smalloc)->next;
			(*tmp_smalloc)->prev = NULL;
		}
		else
			(*tmp_smalloc) = NULL;
	}
	free(smalloc->ptr);
	free(smalloc);
}
