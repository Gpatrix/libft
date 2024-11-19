/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:05:50 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/17 11:27:20 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	index;

	index = 0;
	if (s == NULL)
		return ;
	while (s[index] != '\0')
	{
		f(index, &s[index]);
		index++;
	}
}

// void	test_fonction(unsigned int n, char *c)
// {
// 	*c += n;
// }

// int	main(void)
// {
// 	char test_str[] = "test le plus";

// 	ft_striteri(test_str, test_fonction);
// 	printf("%s", test_str);
// 	return (0);
// }
