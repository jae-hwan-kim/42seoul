NAME=so_long

CC=gcc
CFLAGS= -Wall -Wextra -Werror
DEBUG = -g3 -fsanitize=address
OPENGL= -framework OpenGL
APPKIT= -framework AppKit
MLX_DIR= ./mlx
MLX_LIB= mlx
RM=rm -f
CP=cp
SRC= main.c \
	 init.c \
	 key.c \
	 get_next_line.c \
	 get_next_line_utils.c 

OBJ=$(SRC:.c=.o)

$(NAME) : $(OBJ)
	$(CC) $(DEBUG) -L$(MLX_DIR) -l$(MLX_LIB) $(OPENGL) $(APPKIT) $(OBJ) -o $(NAME)

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
