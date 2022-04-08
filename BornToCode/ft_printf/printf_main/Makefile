NAME = libftprintf.a

SRC_DIR = ./src/
SRC_NAME = 	ft_check.c\
			ft_form_check.c\
			ft_printf.c\
			main.c

SRC = $(addprefix $(SRC_DIR), $(SRC_NAME))

UTIL_DIR = ./util/
UTIL_NAME = ft_put_c.c\
			ft_put_s.c\
			ft_put_d_i.c\
			ft_putchar_fd.c\
			ft_putnbr.c\
			ft_put_u.c\
			ft_hex.c\
			ft_put_x.c\
			ft_put_p.c\
			ft_hex_p.c

UTIL = $(addprefix $(UTIL_DIR),$(UTIL_NAME))

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = -rcs

OBJS = $(SRC:.c=.o) $(UTIL:.c=.o)

all: $(NAME)

run: $(NAME) $(SRC:.c=.o) $(UTIL:.c=.o)
	$(CC) $(CFLAGS) $(notdir $^)

$(NAME):  $(SRC:.c=.o) $(UTIL:.c=.o)
	$(AR) $(ARFLAGS) $(notdir $@) $(notdir $^)

$(OBJ_DIR)%.o: $(OBJ_DIR)%.c
	$(CC) $(CFLAGS) -c $^

$(UTIL_DIR)%.o: $(UTIL_DIR)%.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f $(notdir $(OBJS))

fclean:
	rm -f $(notdir $(OBJS)) $(notdir $(NAME)) a.out

re: fclean all

.PHONY : all clean fclean
