/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:27:23 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/18 10:05:57 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp_free;

	if (!lst || !(lst->content) || !f)
		return ;
	while (lst->next != NULL)
	{
		temp_free = lst->next;
		f(lst->content);
		lst = temp_free;
	}
	f(lst->content);
}

// static void	foo(void *to_del)
// {
// 	(void)to_del;
// 	return ;
// }

// int	main(void)
// {
// 	t_list	*test_lst = NULL;

// 	test_lst = malloc(sizeof(size_t));
// 	test_lst = ft_lstnew("test");
// 	test_lst->next = ft_lstnew("test");

// 	ft_lstiter(test_lst, foo);

// 	return (0);
// }
