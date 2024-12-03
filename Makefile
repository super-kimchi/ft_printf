NAME = libftprintf.a
LIBFT = /libft/libft.a
FT_PRINTF = /ft_printf/ft_printf.a

LIBFTPRINTF = libftprintf.a

all: $(NAME)

$(NAME): $(LIBFTPRINTF)

$(LIBFTPRINTF): $(LIBFT) $(FT_PRINTF)

$(LIBFT) $(FT_PRINTF)
