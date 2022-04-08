NAME := libft.a
SRCS := first.c \
		second.c \
		third.c
OBJS := first.o \
		second.o \
		third.o

AR := ar
ARFLAGS := -rc
cc := gcc
CFLAGS := -Wall -Wextra -Werror

all : $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $?

$.o : $.c
	$(CC) $(CFLAGS) -c $<

.PHONY : all clean fclean
