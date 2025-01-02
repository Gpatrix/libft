/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:20:01 by lchauvet          #+#    #+#             */
/*   Updated: 2025/01/02 15:00:07 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "smalloc.h"

t_smalloc	**get_smalloc(void)
{
	static t_smalloc	*lst = NULL;

	return (&lst);
}


void	smalloc_clear(void)
{
	t_smalloc	**smalloc;
	t_smalloc	*tmp_smalloc;

	smalloc = get_smalloc();
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

void	smalloc_end(bool exit_error)
{
	smalloc_clear();
	exit(exit_error);
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
