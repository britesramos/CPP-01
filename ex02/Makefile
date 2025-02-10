# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sramos <sramos@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2025/01/27 18:49:07 by sramos        #+#    #+#                  #
#    Updated: 2025/02/10 16:21:42 by sramos        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = brain

CPPFLAGS = -Wall -Werror -Wextra -std=c++11

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@g++ $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
