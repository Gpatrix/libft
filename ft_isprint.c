/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:13:27 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/17 09:50:19 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (16384);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("fake: %i | True: %i", ft_isprint(32), isprint(126));
// 	return (0);
// }
