SRCS		= ft_putchar.c \
			  ft_swap.c \
			  ft_putstr.c \
			  ft_strlen.c \
			  ft_strcmp.c

OBJS		= $(addprefix srcs/, ${SRCS:.c=.o})

NAME		= libft.a

.c.o:
			gcc -Wextra -Wall -Werror -c -I./includes $< -o ${<:.c=.o}

${NAME}:	${objs}
			ar -rcs $@ $^

all:		${NAME}

clean:		
			rm -f ${OBJS}


fclean:		clean
			rm -f ${NAME}

re:			fclean all

.Phony:		all clean fclean re
