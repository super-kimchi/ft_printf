NAME = libftprintf.a
LIBFT = libft/libft.a
FT_PRINTF = ft_printf/ft_printf.a
OBJS = *.o

all: $(NAME)

$(NAME): $(FT_PRINTF) $(LIBFT)
	ar x $(LIBFT)
	ar x $(FT_PRINTF)
	ar rcs $(NAME) $(OBJS)
	$(MAKE) fclean -C libft
	$(MAKE) fclean -C ft_printf
	$(MAKE) clean

$(LIBFT):
	@echo "make libft"
	@$(MAKE) bonus -C libft

$(FT_PRINTF):
	@echo "make ft_printf"
	@$(MAKE) -C ft_printf

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
