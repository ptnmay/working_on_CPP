# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/06 22:26:40 by psaeyang          #+#    #+#              #
#    Updated: 2024/01/06 22:26:58 by psaeyang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BRED =\033[1;31m
BCYN =\033[1;36m
BYEL =\033[1;33m
RES = \033[0m

COMPILE = echo "$(BCYN)$(NAME) compiled....$(RES)"
CLEAN = echo "$(BYEL)$(NAME) clean....$(RES)"
FCLEAN = echo "$(BRED)$(NAME) fclean....$(RES)"

NAME = whatever

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address

SRC = main.cpp 
OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)
		@$(COMPILE)
#		@say -v Kanya "คอมพายลิ่ง"

clean:
	rm -f ${OBJ}
	@$(CLEAN)
#	@say -v Samantha "clean"

fclean: clean
	rm -f ${NAME}
	@$(FCLEAN)
#	@say -v Samantha "f clean"

re: fclean all

.PHONY: all clean fclean re
