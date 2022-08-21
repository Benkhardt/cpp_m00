# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbenkhar <dbenkhar@students.42wolfsburg.de +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 13:38:00 by dbenkhar          #+#    #+#              #
#    Updated: 2022/08/21 17:39:16 by dbenkhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bookli

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRC = bookli.cpp main.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: $(NAME) clean fclean re all
