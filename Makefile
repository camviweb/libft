CFLAGS	= -Wall -Wextra -Werror 
CC	= cc $(CFLAGS)

#source files 
SRC	= srcs/

#header files
INC	= includes/

NAME	= libft.a

all: $(NAME)

libft.a: ft_strlen.o ft_swap.o ft_putchar.o ft_putstr.o ft_strcmp.o
	ar rcs -o $@ $^

%.o: $(SRC)%.c
	$(CC) -o $@ -c $< -I $(INC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
