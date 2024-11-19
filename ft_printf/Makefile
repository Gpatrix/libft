CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g -O0

NAME	= libftprintf.a

LIB		= includes
LIBFT	= libft

SRCS	= src/ft_printf.c src/ft_printf_utils.c

OBJS	= ${SRCS:.c=.o}

all:	${NAME}

%.o: %.c
	@${CC} ${CFLAGS} -c -o $@ $< -I ${LIB}

${NAME}: ${OBJS}
	@ar -rcs $@ $^

clean:
	@rm -f ${OBJS}

fclean:		clean
	@rm -f ${NAME}

re:			fclean ${NAME}

.PHONY:		all clean fclean re bonus
