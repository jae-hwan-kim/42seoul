# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/26 10:31:56 by jaekim            #+#    #+#              #
#    Updated: 2021/09/26 10:31:59 by jaekim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = a.out
OBJS = main.o error.o print.o
cc = gcc

CFLAGS = -Wall -Wextra -Werror 

all = $(TARGET) 

$(TARGET) : $(OBJS)
	$(cc) $(LDFLAGS) -o $@ $^ 

.c.o :
	$(cc) $(CFLAGS) -c -o $@ $<
	
fclean :
	rm -rf $(OBJS) $(TARGET)
