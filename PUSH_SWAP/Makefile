# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 13:56:00 by pchatagn          #+#    #+#              #
#    Updated: 2024/10/30 14:02:42 by pchatagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra 
AR = ar rcs
RM = rm -f

FILES = push_swap.c \
		operations.c \
		ft_utils.c   \
		ft_errors.c  \
OBJ = $(FILES:.c=.o)

.c.o :
	${CC} ${CFLAGS} -c $, -o $@

all: $NAME
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re