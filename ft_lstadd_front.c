/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:28:10 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/18 09:00:35 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst[0])
		new->next = *lst;
	lst[0] = new;
}

// int	main(void)
// {
// 	t_list	**test_tab;

// 	test_tab = malloc (2 * sizeof(t_list));
// 	*test_tab = ft_lstnew("second");

// 	ft_lstadd_front(test_tab, ft_lstnew("first"));
// 	printf("%s ", (char *)test_tab[0]->content);
// 	printf("%s", (char *)test_tab[0]->next->content);
// 	free(test_tab[0]->next);
// 	free(test_tab[0]);
// 	free(test_tab);
// 	return (0);
// }
