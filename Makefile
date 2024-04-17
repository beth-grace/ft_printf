CC = gcc
CFLAGS = -Wall -Werror -Wextra -I. -c
NAME = libftprintf.a
SRC = check_case.c\
	readit.c\
	ft_printf.c\
	libft.h\
OBJ = $(patsubst %.c,%.o,$(SRC))

all : $(NAME)

$(NAME) : $(OBJ)
	ar -r $(NAME) $(OBJ)

$(OBJ): $(SRC)
	cc $(CFLAGS) $(SRC)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : clean all
.PHONY : all clean fclean re
