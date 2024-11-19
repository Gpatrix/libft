/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:50:59 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/17 16:36:19 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	index;

	index = 0;
	src_size = ft_strlen(src);
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (src_size);
}

// int main() {
// 	char	array [] = "162455";
// 	char	*copy = NULL;
// 	int		length = sizeof( char ) * 5;

// 	copy = (char *) malloc( length );
// 	ft_strlcpy(copy, array, 5);

// 	for(length=0; length<5; length++ ) {
// 		printf("%c", copy[length]);
// 	}
// 	printf("\n");

// 	free(copy);

// 	return (0);
// }
