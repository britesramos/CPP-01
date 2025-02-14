# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sramos <sramos@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2025/01/27 18:49:07 by sramos        #+#    #+#                  #
#    Updated: 2025/02/14 17:50:31 by sramos        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = zombie_horde

CPPFLAGS = -Wall -Werror -Wextra -std=c++11

SRC = main.cpp\
	zombieHorde.cpp\
	Zombie.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
