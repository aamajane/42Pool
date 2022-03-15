NAME	= do-op

SRCS	= srcs/ft_do_op.c \
		  srcs/ft_is_op.c \
		  srcs/ft_putchar.c \
		  srcs/ft_putstr.c \
		  srcs/ft_putnbr.c \
		  srcs/ft_atoi.c \
		  srcs/main.c

OBJS	= ${SRCS:.c=.o}

INCS	= includes

GCC		= gcc

FLGS	= -Wall -Wextra -Werror

RM		= rm -f


all:		${NAME}

.c.o:
			${GCC} ${FLGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}:	${OBJS}
			${GCC} ${FLGS} ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

.PHONY:		all clean fclean
