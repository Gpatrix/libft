/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:41:49 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/21 09:46:16 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (n-- > 0)
		*dest_ptr++ = *src_ptr++;
	return (dest);
}
// int main() {

// 	int	array [] = { 54, 85, 20, 63, 21 };
// 	int	* copy = NULL;
// 	int	length = sizeof( int ) * 5;

// 	copy = (int *) malloc( length );
// 	ft_memcpy(copy, array, length);

// 	for( length=0; length<5; length++ ) {
// 		printf( "%d ", copy[ length ] );
// 	}
// 	printf("\n");

// 	free(copy);

// 	return (0);
// }
