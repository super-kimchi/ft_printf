NAME = libftprintf.a
FT_PRINTF = ft_printf/ft_printf.a
OBJS = *.o

all: $(NAME)

$(NAME): $(FT_PRINTF) 
	ar x $(FT_PRINTF)
	ar rcs $(NAME) $(OBJS)
	$(MAKE) fclean -C ft_printf
	$(MAKE) clean

$(FT_PRINTF):
	@echo "make ft_printf"
	@$(MAKE) -C ft_printf

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
