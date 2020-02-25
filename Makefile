NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra

HEAD = ./include

SRCS = ft_memset.c ft_bzero.c ft_strlen.c ft_strlcpy.c main.c

OBJS = ${SRCS:.c=.o}

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	${CC} -o ${NAME} ${OBJS}

all : ${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	 rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
