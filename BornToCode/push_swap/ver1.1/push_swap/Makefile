NAME=push_swap

CC=gcc
CFLAGS=-Wall -Wextra -Werror

LIB_NAME=ftprintf
LIB_DIR= ./ft_printf/
LIB=$(LIB_DIR)lib$(LIB_NAME).a
LIBFT=libftprintf.a
INCLUDE=-I ./Libft -I ./ft_printf
RM=rm -f
CP=cp
SRC= main.c \
	 push_swap.c \
	 print_lst_deq.c \
	 check_error.c \
	 ft_make_list_index.c \
	 ft_deque_list.c \
	 ft_node_list.c \
	 ft_push.c \
	 ft_swap.c \
	 ft_rotate.c \
	 ft_reverse_rotate.c \
	 ft_util.c \
	 ft_split.c \
	 ft_parse.c

	
OBJ=$(SRC:.c=.o)

$(NAME) :$(LIB) $(OBJ)
	$(CC) $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME) $(OBJ) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

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

leaks : $(LIB)
	$(CC) $(CFLAGS) $(INCLUDE) -L$(LIB_DIR) -l$(LIB_NAME) $(SRC) -g

clean_leaks :
	$(RM) a.out
	rm -rf a.out.dSYM

.PHONY : all clean fclean re
