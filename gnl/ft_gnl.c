/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:39:10 by lchauvet          #+#    #+#             */
/*   Updated: 2024/11/06 09:11:01 by lchauvet         ###   ########.fr       */
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

// int	main(void)
// {
// 	int	fd1;
// 	int	fd2;
// 	char	*test;
// //  1char.txt file.test nl only_nl.txt
// 	fd1 = open("file.test", O_RDONLY);
// 	fd2 = open("file.test", O_RDONLY);
// 	while (1)
// 	{
// 		test = get_next_line(fd1);
// 		printf("%s", test);
// 		if (test == NULL)
// 			break ;
// 		free(test);
// 		test = get_next_line(fd2);
// 		printf("%s", test);
// 		if (test == NULL)
// 			break ;
// 		free(test);
// 	}
// 	if (close(fd1) < 0)
// 		return (0);
// 	if (close(fd2) < 0)
// 		return (0);
// 	return (0);
// }

// int	main(void)
// {
// 	char *tmp;
// 	char *name = "read_error.txt";
// 	int fd = open(name, O_RDONLY);
// 	/* 1 */ printf("%s", tmp = get_next_line(fd));
// 			free(tmp);
// 	/* 2 */ printf("%s", tmp = get_next_line(fd));
// 			free(tmp);
// 	if (BUFFER_SIZE > 100) {
// 		char *temp;
// 		do {
// 			temp = get_next_line(fd);
// 			free(temp);
// 		} while (temp != NULL);
// 	}
// 	/* 3 */ printf("%s", tmp = get_next_line(fd));
// 			free(tmp);
// 	close(fd);
// 	fd = open(name, O_RDONLY);
// 	/* 4 */ printf("%s", tmp = get_next_line(fd));
// 			free(tmp);
// 	/* 5 */ printf("%s", tmp = get_next_line(fd));
// 			free(tmp);
// 	/* 6 */ printf("%s", tmp = get_next_line(fd));
// 			free(tmp);
// 	/* 7 */ printf("%s", tmp = get_next_line(fd));
// 			free(tmp);
// 	/* 8 */ printf("%s", tmp = get_next_line(fd));
// 			free(tmp);

// 	return (0);
// }
