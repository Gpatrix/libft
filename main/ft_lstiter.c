/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:27:23 by lchauvet          #+#    #+#             */
/*   Updated: 2024/12/04 10:22:45 by lchauvet         ###   ########.fr       */
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
