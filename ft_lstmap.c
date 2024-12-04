/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:56:12 by lchauvet          #+#    #+#             */
/*   Updated: 2024/12/04 10:22:56 by lchauvet         ###   ########.fr       */
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
