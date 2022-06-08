#ft_printf 라이브러리 추가하는 명령어
NAME=client

CC=gcc
CFLAGS= -Wall -Wextra -Werror -g3

RM=rm -f
SRC= client.c
	
OBJ=$(SRC:.c=.o)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
