/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:43:23 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/15 15:00:31 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	while (n--)
	{
		if (*ptr++ == c)
		{
			return (--ptr);
		}
	}
	return (NULL);
}

// int	main(void)
// {
// 	char s1[] ="rexQAd";

// 	int size = sizeof(s1);
// 	printf("%p ", memchr(s1, 114, size));
// 	printf("%p", ft_memchr(s1, 114, size));

// 	return (0);
// }
