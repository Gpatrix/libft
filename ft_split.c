/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:39:28 by lchauvet          #+#    #+#             */
/*   Updated: 2024/12/04 10:23:34 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_strndup(const char *start, size_t len)
{
	char	*word;
	size_t	i;

	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static size_t	ft_strlen_end(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0' && *s != c)
	{
		count++;
		s++;
	}
	return (count);
}

void	free_tab(char **tab)
{
	while (*tab)
	{
		free(*tab);
		*tab = NULL;
		(*tab)++;
	}
	free(tab);
	tab = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	tab_size;
	size_t	index;

	if (!s)
		return (0);
	tab = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	index = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != '\0')
		{
			tab_size = ft_strlen_end(s, c);
			tab[index++] = ft_strndup(s, tab_size);
			if (!tab[index - 1])
				return (free_tab(tab), NULL);
			s += tab_size;
		}
	}
	tab[index] = NULL;
	return (tab);
}
