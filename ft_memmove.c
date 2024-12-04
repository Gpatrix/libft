/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:07:02 by lchauvet          #+#    #+#             */
/*   Updated: 2024/12/04 10:23:14 by lchauvet         ###   ########.fr       */
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
