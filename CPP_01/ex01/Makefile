# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 01:03:40 by psaeyang          #+#    #+#              #
#    Updated: 2023/09/26 02:54:27 by psaeyang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BRED =\033[1;31m
BCYN =\033[1;36m
BYEL =\033[1;33m
RES = \033[0m

COMPILE = echo "$(BCYN)$(NAME) compiled....$(RES)"
CLEAN = echo "$(BYEL)$(NAME) clean....$(RES)"
FCLEAN = echo "$(BRED)$(NAME) fclean....$(RES)"

NAME = zombie

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp zombieHorde.cpp main.cpp
OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)
		@$(COMPILE)
		@say -v Kanya "คอมพายลิ่ง"

clean:
	rm -f ${OBJ}
	@$(CLEAN)
	@say -v Samantha "clean"

fclean: clean
	rm -f ${NAME}
	@$(FCLEAN)
	@say -v Samantha "f clean"

re: fclean all

.PHONY: all clean fclean re
