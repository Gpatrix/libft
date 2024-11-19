/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:38:05 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/18 11:07:20 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && index < n)
	{
		if (s1[index] != s2[index])
		{
			return (((unsigned char)s1[index] - (unsigned char)s2[index]));
		}
		index++;
	}
	return (0);
}

// int main(void)
// {
// 	char s1[] ="rex";
// 	char s2[] ="reg";
// 	printf("%i ", strncmp(s1, s2, 4));
// 	printf("%i", ft_strncmp(s1, s2, 4));
// 	return 0;
// }
