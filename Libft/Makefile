SRC = $(wildcard *.c)
NAME = libft.a
OBJS = ${SRC:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY = all clean fclean re

so:
	$(CC) -fPIC $(CFLAGS) -nostartfiles $(SRC)
	$(CC) -shared -o libft.so $(OBJS)
