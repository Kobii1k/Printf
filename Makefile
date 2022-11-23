NAME	= libftprintf.a

SRCS	=	utils/ft_print_char.c utils/ft_print_decimal.c utils/ft_print_hexa_low.c utils/ft_print_hexa_pointer.c utils/ft_print_hexa_up.c utils/ft_print_integer.c utils/ft_print_str.c utils/ft_print_udecimal.c

OBJS	= ${SRCS:.c=.o}

CC				= cc

CFLAGS 			= -Wall -Werror -Wextra

%.o:			%.c Makefile ft_printf.h
						${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

${NAME}:		${OBJS}
				ar rcs ${NAME} ${OBJS}

all:			${NAME}

clean:
						rm -f ${OBJS}

fclean:			clean
						rm -f ${NAME}

re:				fclean all

.PHONY:			all clean fclean re
