/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:09:30 by lchauvet          #+#    #+#             */
/*   Updated: 2024/11/28 16:14:18 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isstrdigit(char *str)
{
	while (*str)
	{
		if (*str <= '0' || *str >= '9')
			return (1);
		str++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("fake: %i | True: %i", ft_isdigit(48), isdigit(48));
// 	return (0);
// }
