NAME = libftprintf.a

CC = gcc

SRC = ft_printf.c ft_print_char.c ft_print_str.c ft_print_low_hex.c ft_print_up_hex.c ft_print_d.c ft_print_u.c ft_print_p.c ft_utoa_base.c ft_itoa.c my_printf_utils.c

CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRC:.c=.o)

%.o:%.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
