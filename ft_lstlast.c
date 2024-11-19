/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:11:41 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/17 16:26:36 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	**test_tab;

// 	test_tab = malloc (2 * sizeof(t_list));
// 	*test_tab = ft_lstnew("second");

// 	ft_lstadd_front(test_tab, ft_lstnew("first"));
// 	printf("%s", (char *)ft_lstlast(*test_tab)->content);
// 	t_list *temp_free;
// 	while (test_tab[0]->next != NULL)
// 	{
// 		temp_free = test_tab[0]->next;
// 		free(test_tab[0]);
// 		test_tab[0] = temp_free;
// 	}
// 	free(test_tab[0]);
// 	free(test_tab);
// 	return (0);
// }
