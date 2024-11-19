/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:05:57 by lchauvet          #+#    #+#             */
/*   Updated: 2024/10/17 15:11:53 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_t_list;

	new_t_list = malloc(sizeof(t_list));
	if (!new_t_list)
		return (NULL);
	new_t_list->content = content;
	new_t_list->next = NULL;
	return (new_t_list);
}

// int	main(void)
// {
// 	t_list	*test_list;

// 	test_list = ft_lstnew("test");
// 	printf("%s", (char *)test_list->content);
// 	free(test_list);
// 	return (0);
// }
