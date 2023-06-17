# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtoia <mtoia@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/17 15:32:47 by mtoia             #+#    #+#              #
#    Updated: 2023/06/17 15:32:49 by mtoia            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed


CC = c++

SRC = main.cpp Fixed.cpp

CFLAGS = -Wextra -Wall -Werror -std=c++98 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean