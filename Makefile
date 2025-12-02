NAME = libftprintf.a

SRC = 

CC = cc

CFLAGS = -Wall -Werro -Wextra

OBJ = $(SRC:.c=.o)

all = $(NAME)

%.o: %.c libftprintf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

flcean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
