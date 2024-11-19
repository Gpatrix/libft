/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:39:05 by lchauvet          #+#    #+#             */
/*   Updated: 2024/11/06 09:11:13 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"

size_t	_ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (*s++)
		counter++;
	return (counter);
}

char	*_ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != '\0' && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

char	*_ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	index;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return ("");
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	new_str = malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	index = 0;
	while (s[index + start] != '\0' && index < (len))
	{
		new_str[index] = s[index + start];
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}

char	*_ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		index;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	new_str = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	index = 0;
	while (*s1)
		new_str[index++] = *s1++;
	while (*s2)
		new_str[index++] = *s2++;
	new_str[index] = '\0';
	return (new_str);
}
