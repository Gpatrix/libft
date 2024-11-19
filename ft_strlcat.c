/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:25:26 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/16 11:51:01 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	dst_length;
	size_t	src_length;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	index = 0;
	if (size <= dst_length)
		return (size + src_length);
	while (src[index] != '\0' && (dst_length + index) < (size -1))
	{
		dst[dst_length + index] = src[index];
		index++;
	}
	dst[dst_length + index] = '\0';
	return (dst_length + src_length);
}

// int main() {
// 	char	array [] = "162455";
// 	char	*copy = NULL;
// 	int		length = sizeof( char ) * 5;

// 	copy = (char *) malloc( length );
// 	ft_strlcat(copy, array, 5);

// 	for(length=0; length<5; length++ ) {
// 		printf("%c", copy[length]);
// 	}
// 	printf("\n");

// 	free(copy);

// 	return (0);
// }
