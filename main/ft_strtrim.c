/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:33:23 by lchauvet          #+#    #+#             */
/*   Updated: 2024/12/04 10:24:21 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(const char c, const char *set)
{
	size_t	index;

	index = 0;
	while (set[index] != '\0')
	{
		if (c == set[index])
			return (1);
		index++;
	}
	return (0);
}

static size_t	d_to_next_char(const char *s, const char *set)
{
	size_t	index;

	index = 0;
	while (s[index] != '\0')
		index++;
	while (ft_isset(s[index -1], set))
		index--;
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	cpy_size;

	while (ft_isset(*s1, set) && *s1 != '\0')
		s1++;
	cpy_size = d_to_next_char(s1, set);
	return (ft_substr(s1, 0, cpy_size));
}
