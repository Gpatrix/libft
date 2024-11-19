/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:56:12 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/18 14:04:59 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*origin;
	t_list	*new_lst;

	if (!lst || !lst->content || !f || !del)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	origin = new_lst;
	while (lst->next != NULL)
	{
		new_lst->next = ft_lstnew(f(lst->next->content));
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (origin);
}

// static void	*foo(void *content)
// {
// 	return (content);
// }

// static void	delet(void *to_del)
// {
// 	free (to_del);
// }

// int	main(void)
// {
// 	t_list	*test_lst = NULL;

// 	test_lst = ft_lstnew("test 1");
//  	ft_lstlast(test_lst)->next = ft_lstnew("test 2");
//  	ft_lstlast(test_lst)->next = ft_lstnew("test 3");
//  	ft_lstlast(test_lst)->next = ft_lstnew("test 4");

// 	printf("origin: %p | ", test_lst);
// 	test_lst = ft_lstmap(test_lst, foo, delet);
// 	printf("map: %p\n", test_lst);

// 	while (test_lst && test_lst->content)
// 	{
// 		printf("%s ", (char *)test_lst->content);
// 		test_lst = test_lst->next;
// 	}

// 	return (0);
// }
