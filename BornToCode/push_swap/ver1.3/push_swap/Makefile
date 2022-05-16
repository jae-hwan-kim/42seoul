NAME=push_swap

CC=gcc
CFLAGS= -Wall -Wextra -Werror

LIB_NAME=ftprintf
LIB_DIR= ./ft_printf/
LIB=$(LIB_DIR)lib$(LIB_NAME).a
LIBFT=libftprintf.a
BONUS_DIR= ./push_swap_bonus/
BONUS=checker
RM=rm -f
CP=cp
SRC= main.c \
	 push_swap.c \
	 ft_sort_small_size.c \
	 ft_a_to_b.c \
	 ft_b_to_a.c \
	 ft_check_error.c \
	 ft_make_list_index.c \
	 ft_deque_util.c \
	 ft_list_util.c \
	 ft_list_del_util.c \
	 ft_util.c \
	 ft_split.c \
	 ft_split_util.c \
	 ft_parse.c \
	 ft_push.c \
	 ft_swap.c \
	 ft_rotate.c \
	 ft_reverse_rotate.c
	
OBJ=$(SRC:.c=.o)

$(NAME) :$(LIB) $(OBJ)
	$(CC) $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME) $(OBJ) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIB) :
	make -C $(LIB_DIR) all
	$(CP) $(LIB) ./

$(BONUS) :
	make -C $(BONUS_DIR) all
	$(CP) $(BONUS) ./

all : $(NAME) $(BONUS)

clean :
	make -C $(LIB_DIR) clean
	$(RM) $(OBJ)

fclean : clean
	make -C $(LIB_DIR) fclean
	$(RM) $(NAME)
	$(RM) $(LIBFT)

re : fclean all

.PHONY : all clean fclean re
