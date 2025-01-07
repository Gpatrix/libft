/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalloc_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:53:42 by lchauvet          #+#    #+#             */
/*   Updated: 2025/01/07 11:57:01 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "smalloc.h"

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

void	smalloc_free(short arena, void *ptr)
{
	t_smalloc	*smalloc;
	t_smalloc	**tmp_smalloc;

	smalloc = _smalloc_chr(arena, ptr);
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
