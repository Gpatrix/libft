/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:19:41 by lchauvet          #+#    #+#             */
/*   Updated: 2025/01/06 08:51:13 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*part2(char *new_str, int count, int i, long long n)
{
	new_str[count] = '\0';
	while (count-- > i)
	{
		new_str[count] = (n % 10) + '0';
		n /= 10;
	}
	return (new_str);
}

char	*ft_itoa(int num)
{
	char		*new_str;
	int			count;
	int			i;
	long		n;

	n = num;
	count = count_size(n);
	i = 0;
	if (n < 0 || count == 0)
		count++;
	new_str = (char *)malloc((count + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		new_str[0] = '-';
		i++;
	}
	new_str = part2(new_str, count, i, n);
	return (new_str);
}

char	*ft_sitoa(short arena, int num)
{
	char		*new_str;
	int			count;
	int			i;
	long		n;

	n = num;
	count = count_size(n);
	i = 0;
	if (n < 0 || count == 0)
		count++;
	new_str = smalloc(arena, (count + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		new_str[0] = '-';
		i++;
	}
	new_str = part2(new_str, count, i, n);
	return (new_str);
}
