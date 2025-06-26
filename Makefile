NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -O3
LIBFT_PATH = ./Libft
LIBFT = $(LIBFT_PATH)/libft.a
MAKE_LIB = ar -rcs

INCS = .

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

bonus : all

all : $(NAME)

$(NAME) : $(OBJS) $(LIBFT) 
	cp $(LIBFT) $(NAME)
	$(MAKE_LIB) $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -I$(INCS) -o $@
	
$(LIBFT) :
	cd $(LIBFT_PATH) && make 

clean :
	rm -rf $(OBJS)
	cd $(LIBFT_PATH) && make clean

fclean : clean
	rm -rf $(NAME)
	cd $(LIBFT_PATH) && make fclean

re: fclean all

.PHONY: all bonus clean fclean re