/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:35:57 by lchauvet          #+#    #+#             */
/*   Updated: 2025/01/03 09:03:52 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		str_len;
	char	*src_copy;
	int		index;

	str_len = ft_strlen(s) + 1;
	src_copy = malloc(str_len);
	if (src_copy == NULL)
		return (NULL);
	index = -1;
	while (++index < str_len)
		src_copy[index] = s[index];
	return (src_copy);
}

char	*ft_sstrdup(short arena, const char *s)
{
	int		str_len;
	char	*src_copy;
	int		index;

	str_len = ft_strlen(s) + 1;
	src_copy = smalloc(arena, str_len);
	if (src_copy == NULL)
		return (NULL);
	index = -1;
	while (++index < str_len)
		src_copy[index] = s[index];
	return (src_copy);
}
