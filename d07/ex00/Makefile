# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbratche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/18 09:33:03 by sbratche          #+#    #+#              #
#    Updated: 2018/06/18 09:33:04 by sbratche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	whatever

CLANG	=	clang++ -Wall -Wextra -Werror

SRC		=	whatever.cpp

OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CLANG) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CLANG) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: 
	rm -f $(OBJ)
	rm -f $(NAME)

re: fclean all
