/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:33:44 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/21 08:55:15 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && (i + j) < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// int main() {

// 	const char test_str[] = "test strin 132";
// 	const char to_fnd[]   = "strin";

// 	printf("%s \n", strnstr(test_str, to_fnd, 11));
// 	printf("%s", ft_strnstr(test_str, to_fnd, 11));
// 	return (0);
// }
