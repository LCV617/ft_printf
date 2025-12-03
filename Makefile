NAME    = libftprintf.a

SRCS    = \
    printf/ft_printf.c \
    printf/ft_printf_char.c \
    printf/ft_printf_string.c \
    printf/ft_printf_ptr.c \
    printf/ft_printf_decimal.c \
    printf/ft_printf_int.c \
    printf/ft_printf_hexa_low.c \
    printf/ft_printf_hexa_up.c \
	printf/ft_printf_unsigned.c \
    printf/utils/ft_putstr.c

OBJS    = $(SRCS:.c=.o)

CC      = cc

CFLAGS  = -Wall -Wextra -Werror -I.

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) test_printf

re: fclean all

test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c $(NAME) -o test_printf

.PHONY: all clean fclean re test
