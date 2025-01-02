CC		= cc
CFLAGS	= -Wall -Wextra -Werror -O3 -g

NAME	= libft.a

SRCS_DIR = main
SRCS_FILE = ft_isalpha.c        ft_isdigit.c    ft_isalnum.c      ft_isascii.c      \
			ft_isprint.c        ft_strlen.c     ft_memset.c       ft_bzero.c        \
			ft_memcpy.c         ft_memmove.c    ft_strlcpy.c      ft_strlcat.c      \
			ft_toupper.c        ft_tolower.c    ft_strchr.c       ft_strrchr.c      \
			ft_strncmp.c        ft_memchr.c     ft_memcmp.c       ft_atoi.c         \
			ft_strdup.c         ft_calloc.c     ft_strnstr.c      ft_substr.c       \
			ft_strjoin.c        ft_strtrim.c    ft_split.c        ft_itoa.c         \
			ft_strmapi.c        ft_striteri.c   ft_putchar_fd.c   ft_putstr_fd.c    \
			ft_putendl_fd.c     ft_putnbr_fd.c  ft_lstnew.c       ft_lstadd_front.c \
			ft_lstsize.c        ft_lstlast.c    ft_lstadd_back.c  ft_lstdelone.c    \
			ft_lstclear.c       ft_lstiter.c    ft_lstmap.c       ft_strlen_end.c   \
			ft_uatoi.c          ft_atol.c       ft_strcmp.c       ft_strndup.c      \
			ft_isstrascii.c     ft_isstrdigit.c ft_atof.c         ft_free_array.c   \
			one_of_str.c        ft_new_strchr.c ft_split_size.c                     \

SRCS = $(addprefix $(SRCS_DIR)/, $(SRCS_FILE))
SRCS += gnl/ft_gnl_utils.c gnl/ft_gnl.c
SRCS_OBJS	= ${SRCS:.c=.o}

all:	${NAME}

%.o: %.c
	@${CC} ${CFLAGS} -c -o $@ $< -I .

${NAME}: ${SRCS_OBJS}
	@make -C ft_printf -s
	@cp ft_printf/libftprintf.a .
	@mv libftprintf.a ${NAME}
	@ar -rcs $@ $^
	@echo "\033[1;32mlibft ready\033[0m"

clean:
	@make clean -C ft_printf -s
	@rm -f ${SRCS_OBJS}

fclean:		clean
	@make fclean -C ft_printf -s
	@rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
