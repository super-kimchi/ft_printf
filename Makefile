NAME = libftprintf.a
LIBFT = libft/libft.a
FT_PRINTF = ft_printf/ft_printf.a
OBJS = *.o

all: $(NAME)

$(NAME):  $(LIBFT)
	ar x $(LIBFT)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	$(make) bonus -C libft

$(FT_PRINTF):
	$(MAKE) -C ft_printf

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
