NAME	= libft.a

SRCS	= srcs/ft_putchar.c \
		  srcs/ft_putstr.c \
		  srcs/ft_strlen.c \
		  srcs/ft_strcmp.c \
		  srcs/ft_swap.c

OBJS	= ${SRCS:.c=.o}

ICLS	= includes

GCC		= gcc

ARRC	= ar rc

RM		= rm -f

FLGS	= -Wall -Wextra -Werror


all:		${NAME}

${NAME}:	${OBJS}
			${ARRC} ${NAME} ${OBJS}

.c.o:
			${GCC} ${FLGS} -c $< -o ${<:.c=.o} -I ${ICLS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
