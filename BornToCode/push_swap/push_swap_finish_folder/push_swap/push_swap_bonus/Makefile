NAME=checker

CC=gcc
CFLAGS= -Wall -Wextra -Werror

LIB_NAME=ftprintf
LIB_DIR= ../ft_printf/
LIB=$(LIB_DIR)lib$(LIB_NAME).a
LIBFT=libftprintf.a
RM=rm -f
CP=cp
SRC= checker.c \
	 get_next_line.c \
	 get_next_line_utils.c \
	 ft_push_bonus.c \
	 ft_swap_bonus.c \
	 ft_rotate_bonus.c \
	 ft_reverse_rotate_bonus.c \
	 ../ft_check_error.c \
	 ../ft_make_list_index.c \
	 ../ft_deque_util.c \
	 ../ft_list_util.c \
	 ../ft_list_del_util.c \
	 ../ft_util.c \
	 ../ft_split.c \
	 ../ft_split_util.c \
	 ../ft_parse.c
	
OBJ=$(SRC:.c=.o)

$(NAME) :$(LIB) $(OBJ)
	$(CC) $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME) $(MAN_SRC) $(OBJ) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIB) :
	make -C $(LIB_DIR) all
	$(CP) $(LIB) ./

all : $(NAME)

clean :
	make -C $(LIB_DIR) clean
	$(RM) $(OBJ)

fclean : clean
	make -C $(LIB_DIR) fclean
	$(RM) $(NAME)
	$(RM) $(LIBFT)

re : fclean all

.PHONY : all clean fclean re
