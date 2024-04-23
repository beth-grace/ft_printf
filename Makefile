CC = gcc
CFLAGS = -Wall -Werror -Wextra -I. -c
NAME = libftprintf.a

SRC = ft_printf.c

OBJ = $(patsubst %.c,%.o,$(SRC))

LIBFT = libft.a

all : $(NAME)

$(NAME) : $(LIBFT) $(OBJ)
	mv libft.a $(NAME)
	ar -r $(NAME) $(OBJ)

$(LIBFT) :
	$(MAKE) -C libft
	cp libft/libft.h libft.h
	mv libft/libft.a libft.a

$(OBJ): $(SRC)
	cc $(CFLAGS) $(SRC)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : clean all
.PHONY : all clean fclean re
