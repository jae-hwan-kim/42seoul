NAME=server

CC=gcc
CFLAGS= -Wall -Wextra -Werror -g3

RM=rm -f
SRC= server.c
	
OBJ=$(SRC:.c=.o)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# %.o : %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
