/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchauvet <lchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:51:17 by lchauvet          #+#    #+#             */
/*   Updated: 2025/01/06 15:01:40 by lchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>
#include "./smalloc/smalloc.h"

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}				t_list;

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);
t_list		*ft_lstlast(t_list *lst);
int			ft_lstsize(t_list *lst);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isstrdigit(char *str);
int			ft_isascii(int c);
int			ft_isstrascii(char *str);
int			ft_isprint(int c);

int			ft_toupper(int c);
int			ft_tolower(int c);

size_t		ft_strlen(const char *s);
size_t		ft_strlen_end(char *str, char *end);
size_t		ft_strlen_cont(char *str, char *end);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);

char		*ft_strdup(const char *s);
char		*ft_sstrdup(short arena, const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_ssubstr(short arena,
				const char *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		**ft_ssplit(short arena, char const *s, char c);
int			ft_split_size(char **array);

char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_new_strchr(const char *s, char *str);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
bool		one_of_str(const char c, const char *str);

void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *s, int c, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);

int			ft_atoi(const char *nptr);
long		ft_atol(const char *nptr);
uint32_t	ft_uatoi(const char *nptr);
double		ft_atof(char *str);
char		*ft_itoa(int num);
char		*ft_sitoa(short arena, int num);

void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *s);
char		*ft_strndup(const char *start, size_t len);
char		*ft_sstrndup(short arena, const char *start, size_t len);

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

int			ft_printf(const char *s, ...);
char		*get_next_line(int fd);

void		ft_free_array(char **array);
