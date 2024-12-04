/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:35:57 by lchauvet          #+#    #+#             */
/*   Updated: 2024/12/04 10:23:43 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		str_len;
	char	*src_copy;
	int		index;

	str_len = ft_strlen(s) + 1;
	src_copy = (char *) malloc(str_len);
	if (src_copy == NULL)
		return (NULL);
	index = -1;
	while (++index < str_len)
		src_copy[index] = s[index];
	return (src_copy);
}
