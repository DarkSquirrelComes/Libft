NAME=libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

HDDIRS=-I includes/

SRC=*.c

OBJ=*.o

$(NAME): includes/libft.h
	$(CC) $(CFLAGS) -c $(SRC) $(HDDIRS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean