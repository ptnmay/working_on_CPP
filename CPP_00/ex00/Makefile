# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 06:27:20 by psaeyang          #+#    #+#              #
#    Updated: 2023/08/03 07:10:08 by psaeyang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BRED =\033[1;31m
BCYN =\033[1;36m
BYEL =\033[1;33m
RES = \033[0m

COMPILE = echo "$(BCYN)$(NAME) compiled....$(RES)"
CLEAN = echo "$(BYEL)$(NAME) clean....$(RES)"
FCLEAN = echo "$(BRED)$(NAME) fclean....$(RES)"

NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)
		@$(COMPILE)
		@say -v Kanya "คอมพายแป๊ปนะค่ะ"

clean:
	rm -f ${OBJ}
	@$(CLEAN)
	@say -v Samantha "clean clean clean"

fclean: clean
	rm -f ${NAME}
	@$(FCLEAN)
	@say -v Samantha "f clean bye"
	
song: 
	@say -v Samantha "i'm a barbie girl"
	@say -v Samantha "in a barbie world o oh"
	@say -v Samantha "i am plastic"
	@say -v Samantha "it's fantastic"

re: fclean all

.PHONY: all clean fclean re
