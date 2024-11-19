/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uatoi                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:15:53 by lchauvet          #+#    #+#             */
/*   Updated: 2024/11/12 16:26:17 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint32_t	ft_uatoi(const char *nptr)
{
	uint32_t	resulte;

	resulte = 0;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t'
		|| *nptr == '\v' || *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		resulte = resulte * 10 + (*nptr - '0');
		nptr++;
	}
	return (resulte);
}
