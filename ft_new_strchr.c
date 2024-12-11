/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_strchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:48:26 by lchauvet          #+#    #+#             */
/*   Updated: 2024/12/11 17:54:55 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_new_strchr(const char *s, char *str)
{
	if (!s)
		return (NULL);
	while (*s != '\0' && !one_of_str(*s, str))
		s++;
	if (*s == one_of_str(*s, str))
		return ((char *)s);
	return (NULL);
}
