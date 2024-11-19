/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:31:26 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/22 12:52:50 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	index;

	new_str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		new_str[index] = f(index, s[index]);
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}

// char	test_fonction(unsigned int n, char c)
// {
// 	return (c + n);
// }

// int	main(void)
// {
// 	("%s", ft_strmapi("test le plus", test_fonction));
// 	return (0);
// }
