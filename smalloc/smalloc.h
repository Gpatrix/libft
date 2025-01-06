/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalloc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:20:53 by lchauvet          #+#    #+#             */
/*   Updated: 2025/01/06 09:46:23 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SMALLOC_H
# define SMALLOC_H

# include <stdbool.h>
# include <stddef.h>
# include <stdlib.h>

typedef struct s_smalloc
{
	void				*ptr;
	struct s_smalloc	*prev;
	struct s_smalloc	*next;
}				t_smalloc;

# ifndef MAX_ARENA
#  define MAX_ARENA 10
# endif

void		*smalloc(short arena, size_t __size);

t_smalloc	**get_smalloc(short arena);

t_smalloc	*smalloc_new(void *ptr);
bool		smalloc_add_last(short arena, t_smalloc *new);
void		smalloc_free(short arena, void *ptr);
void		smalloc_clear(short arena);
void		smalloc_clear_all(void);
void		smalloc_end(bool exit_error);

#endif
