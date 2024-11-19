/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:07:02 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/21 09:44:58 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src_dest;
	unsigned char	*dest_ptr;
	size_t			i;

	src_dest = (unsigned char *)src;
	dest_ptr = (unsigned char *)dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest_ptr > src_dest)
		while (n-- > 0)
			dest_ptr[n] = src_dest[n];
	else
	{
		while (i < n)
		{
			dest_ptr[i] = src_dest[i];
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	*src = "this is a good cat !\r\n";
// 	char	dst1[0xF0];
// 	char	dst2[0xF0];
// 	int		size = strlen(src);

// 	memmove(dst1, src, size);
// 	printf("%s", dst1);
// 	ft_memmove(dst2, src, size);
// 	printf("%s", dst2);
// }
