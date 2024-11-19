/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:18:26 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/15 08:54:41 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
	{
		return (8);
	}
	return (0);
}

// int	main(void)
// {
// printf("fake: %i | True: %i", ft_isalnum(55), isalnum(55));
// 	return (0);
// }
