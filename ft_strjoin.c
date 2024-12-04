/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:22:07 by lchauvet          #+#    #+#             */
/*   Updated: 2024/12/04 10:23:47 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		index;

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
