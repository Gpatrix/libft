/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:42:11 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/16 09:28:29 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
		*ptr++ = c;
	return (s);
}

// int main() {

// 	int	array [] = { 54, 85, 20, 63, 21 };
// 	size_t	size = sizeof( int ) * 5;
// 	int	length;

// 	/* Display the initial values */
// 	for(length=0; length<5; length++) {
// 		printf("%d ", array[ length ] );
// 	}
// 	printf("\n");

// 	ft_memset(array, 0, size);

// 	/* Display the new values */
// 	for( length=0; length<5; length++) {
// 		printf( "%d ", array[ length ] );
// 	}
// 	printf("\n");

// 	return (0);
// }
