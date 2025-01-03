/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:20:01 by lchauvet          #+#    #+#             */
/*   Updated: 2025/01/03 09:03:28 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "smalloc.h"

t_smalloc	**get_smalloc(short arena)
{
	static t_smalloc	*lst[MAX_ARENA] = {NULL};

	return (&(lst[arena]));
}

void	smalloc_clear(short arena)
{
	t_smalloc	**smalloc;
	t_smalloc	*tmp_smalloc;

	if (arena == -1)
	{
		smalloc_clear_all();
		return ;
	}
	smalloc = get_smalloc(arena);
	if (!smalloc)
		return ;
	while (*smalloc)
	{
		tmp_smalloc = *smalloc;
		(*smalloc) = (*smalloc)->next;
		free(tmp_smalloc->ptr);
		free(tmp_smalloc);
	}
}

void	smalloc_clear_all(void)
{
	char		arena;
	t_smalloc	**smalloc;
	t_smalloc	*tmp_smalloc;

	arena = MAX_ARENA;
	while (--arena >= 0)
	{
		smalloc = get_smalloc(arena);
		if (!smalloc)
			break ;
		while (*smalloc)
		{
			tmp_smalloc = *smalloc;
			(*smalloc) = (*smalloc)->next;
			free(tmp_smalloc->ptr);
			free(tmp_smalloc);
		}
	}
}

void	smalloc_end(bool exit_error)
{
	smalloc_clear_all();
	exit(exit_error);
}

void	*smalloc(short arena, size_t __size)
{
	void	*ptr;

	ptr = malloc(__size);
	if (!ptr)
		smalloc_end(EXIT_FAILURE);
	if (smalloc_add_last(get_smalloc(arena), smalloc_new(ptr)))
		smalloc_end(EXIT_FAILURE);
	return (ptr);
}
