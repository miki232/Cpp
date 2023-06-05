# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtoia <mtoia@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/05 17:26:10 by mtoia             #+#    #+#              #
#    Updated: 2023/06/05 17:26:36 by mtoia            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde

CC = c++

SRC = main.cpp Zombie.cpp zombieHorde.cpp

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