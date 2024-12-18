NAME = ft_printf.a
SRC = ft_printf.c	ft_printf_utils.c	ft_printf_bonus.c
OBJ = $(SRC:.c=.o)

CC = cc
FLAGS = -Wextra -Wall -Werror

%.o: %.c
	$(CC) -c $(FLAG) $<

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
