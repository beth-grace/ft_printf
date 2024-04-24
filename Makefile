CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a

SRC = ft_printf.c

OBJ = $(patsubst %.c,%.o,$(SRC))

LIBFT = libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@echo "<$(NAME)> MAKING $(NAME)"
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJ)

$(LIBFT):
	@$(MAKE) -C libft
	@echo "<$(NAME)> MOVING HEADER AND ARCHIVE OUT"
	@cp libft/libft.h libft.h
	@mv libft/libft.a libft.a

%.o: %.c
	@echo "<$(NAME)> COMPILING $@"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@rm -f $(LIBFT)

fclean: clean
	@rm -f $(NAME)
	@rm -f libft.h

re: fclean all

.PHONY : all clean fclean re
