/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:39:10 by lchauvet          #+#    #+#             */
/*   Updated: 2024/12/04 10:22:03 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"

static char	*_get_line(char **str)
{
	char	*line;
	char	*tmp_str;
	int		len;

	if (!_ft_strchr(*str, '\n'))
	{
		len = _ft_strlen(*str);
		line = _ft_substr(*str, 0, len);
		return (free(*str), *str = NULL, line);
	}
	len = _ft_strchr(*str, '\n') - *str + 1;
	line = _ft_substr(*str, 0, len);
	if (!line)
		return (free(*str), NULL);
	tmp_str = *str;
	*str = _ft_substr(*str, len, _ft_strlen((*str + len)));
	if (!*str)
		return (free(tmp_str), NULL);
	if (_ft_strlen(*str) == 0)
	{
		free(*str);
		*str = NULL;
	}
	free(tmp_str);
	return (line);
}

static char	*_read_file(char *leftover, int fd)
{
	char		*tmp_str;
	char		*buffer;
	int			r_char;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	r_char = BUFFER_SIZE;
	while (!_ft_strchr(leftover, '\n') && r_char == BUFFER_SIZE)
	{
		r_char = read(fd, buffer, BUFFER_SIZE);
		if (r_char < 0)
			return (free(buffer), NULL);
		if (r_char == 0 && leftover == NULL)
			return (free(buffer), NULL);
		buffer[r_char] = '\0';
		tmp_str = leftover;
		leftover = _ft_strjoin(leftover, buffer);
		if (!leftover)
			return (free(buffer), free(tmp_str), NULL);
		free(tmp_str);
	}
	return (free(buffer), leftover);
}

char	*get_next_line(int fd)
{
	static char	*leftover[FD_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (ft_strchr(leftover[fd], '\n'))
		return (_get_line(&leftover[fd]));
	leftover[fd] = _read_file(leftover[fd], fd);
	if (!leftover[fd])
		return (free(leftover[fd]), leftover[fd] = NULL);
	return (_get_line(&leftover[fd]));
}
