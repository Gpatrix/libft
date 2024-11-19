/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:39:02 by lchauvet          #+#    #+#             */
/*   Updated: 2024/11/08 13:50:56 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft.h"

# define FD_MAX 4096

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
size_t	_ft_strlen(const char *s);
char	*_ft_strchr(const char *s, int c);
char	*_ft_strjoin(char const *s1, char const *s2);
char	*_ft_substr(const char *s, unsigned int start, size_t len);

#endif
