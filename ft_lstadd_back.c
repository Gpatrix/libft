/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:20:23 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/22 11:00:24 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (!last)
		lst[0] = new;
	else
		last->next = new;
}

// int	main(void)
// {
// 	t_list	**test_tab;

// 	test_tab = malloc (3 * sizeof(t_list));
// 	test_tab[0] = ft_lstnew("fist");

// 	ft_lstadd_back(test_tab, ft_lstnew("second"));
// 	ft_lstadd_back(test_tab, ft_lstnew("third"));
// 	printf("%s ", (char *)test_tab[0]->content);
// 	printf("%s ", (char *)test_tab[0]->next->content);
// 	printf("%s", (char *)test_tab[0]->next->next->content);
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
