NAME = libftprintf.a
LIBFT = libft/libft.a
FT_PRINTF = ft_printf/ft_printf.a
OBJS = *.o

all: $(NAME)

$(NAME):  $(LIBFT)
	ar x $(LIBFT)
	ar rcs $(NAME) $(OBJS)
	$(MAKE) fclean -C libft
	$(MAKE) clean
	#$(MAKE) fclean -C printf

$(LIBFT):
	@echo "make libft"
	@$(MAKE) bonus -C libft

$(FT_PRINTF):
	$(MAKE) -C ft_printf

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
