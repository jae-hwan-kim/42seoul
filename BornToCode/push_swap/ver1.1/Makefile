NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = 	main.c \
		./src/ft_form_check.c \
		./src/ft_printf.c

OBJS = $(SRC:.c=.o) $(UTIL:.c=.o)

all: $(NAME)

$(NAME):  $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re: fclean all

.PHONY : all clean fclean re
