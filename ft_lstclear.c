/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:59:17 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/18 14:25:13 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!*lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list	**test_lst = NULL;

// 	test_lst = malloc (4 * sizeof(t_list *));
// 	*test_lst = ft_lstnew("test 1");
//  	ft_lstlast(*test_lst)->next = ft_lstnew("test 2");
//  	ft_lstlast(*test_lst)->next = ft_lstnew("test 3");
//  	ft_lstlast(*test_lst)->next = ft_lstnew("test 4");

// 	ft_lstclear(test_lst, delet);
// 	return (0);
// }
