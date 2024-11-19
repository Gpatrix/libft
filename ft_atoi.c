/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:14:33 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/15 17:38:00 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	signe;
	int	resulte;

	signe = 1;
	resulte = 0;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t'
		|| *nptr == '\v' || *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			signe = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		resulte = resulte * 10 + (*nptr - '0');
		nptr++;
	}
	return (resulte * signe);
}

// int	main(void)
// {

// 	char s1[] ="  132 e";

// 	printf("%i\n", atoi(s1));
// 	printf("%i", ft_atoi(s1));

// 	return (0);
// }
