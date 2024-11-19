/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:36:23 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/18 10:07:14 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	if (lst->content)
		del(lst->content);
	if (lst)
		free(lst);
}

// void	delet(void *to_del)
// {
// 	free (to_del);
// }

// int	main(void)
// {
// 	t_list	*test_list;
// 	char	*test_char;

// 	test_char = malloc(1);
// 	test_char[0] = 'c';

// 	test_list = ft_lstnew(test_char);
// 	ft_lstdelone(test_list, delet);

// 	return (0);
// }
