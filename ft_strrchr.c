/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:26:38 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/21 08:55:44 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// char	*ft_strrchr(const char *s, int c)
// {
// 	char	*ptr;

// 	ptr = NULL;
// 	while (*s)
// 	{
// 		if (*s == c)
// 			ptr = (char *)s;
// 		s++;
// 	}
// 	if (*s == c)
// 		return ((char *)s);
// 	return (ptr);
// }

// int main() {
// 	char	test_char[] = "te1st 1234";

// 	printf("%p %p", ft_strrchr(test_char, 49), strrchr(test_char, 49));
// 	return (0);
// }
