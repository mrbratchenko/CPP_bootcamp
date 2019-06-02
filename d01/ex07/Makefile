# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbratche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/20 14:48:40 by sbratche          #+#    #+#              #
#    Updated: 2018/06/20 14:48:41 by sbratche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	replace

CLANG	=	clang++ -Wall -Wextra -Werror

SRC		=	replace.cpp

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
