/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalloc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:20:53 by lchauvet          #+#    #+#             */
/*   Updated: 2025/01/02 15:00:32 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct s_smalloc
{
	void				*ptr;
	struct s_smalloc	*prev;
	struct s_smalloc	*next;
}				t_smalloc;

void		*smalloc(size_t __size);

t_smalloc	**get_smalloc(void);

t_smalloc	*smalloc_new(void *ptr);
bool		smalloc_add_last(t_smalloc **lst, t_smalloc *new);
void		smalloc_free(void *ptr);
void		smalloc_clear(void);
void		smalloc_end(bool exit_error);
