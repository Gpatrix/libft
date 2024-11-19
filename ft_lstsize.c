/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:54:23 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/17 15:22:41 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 1;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list	**test_tab;

// 	test_tab = malloc (2 * sizeof(t_list));
// 	*test_tab = ft_lstnew("second");

// 	ft_lstadd_front(test_tab, ft_lstnew("first"));
// 	printf("%i", ft_lstsize(test_tab[0]));
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
