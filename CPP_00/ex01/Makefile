# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 07:19:00 by psaeyang          #+#    #+#              #
#    Updated: 2023/09/19 02:22:49 by psaeyang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BRED =\033[1;31m
BCYN =\033[1;36m
BYEL =\033[1;33m
RES = \033[0m

COMPILE = echo "$(BCYN)$(NAME) compiled....$(RES)"
CLEAN = echo "$(BYEL)$(NAME) clean....$(RES)"
FCLEAN = echo "$(BRED)$(NAME) fclean....$(RES)"

NAME = phonebook

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = phonebook.cpp contact.cpp main.cpp
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

song:
	@say -v Samantha "i'm a barbie girl"
	@say -v Samantha "in a barbie world o oh"
	@say -v Samantha "i am plastic"
	@say -v Samantha "it's fantastic"

re: fclean all

.PHONY: all clean fclean re

# ### Executablem###
# NAME	= phonebook

# ### Compilation ###
# CC		= c++
# RM		= rm -f
# CFLAGS	= -Wall -Wextra -Werror -std=c++98

# ### Source Files ###
# SRCS	= main.cpp PhoneBook.cpp Contact.cpp

# ### Object Files ###
# OBJS	= $(SRCS:.cpp=.o)

# ### Compilation Rule ###
# %.o:%.cpp
# 	$(CC) $(CFLAGS) -c $< -o $@

# all: $(NAME)

# $(NAME): $(OBJS)
# 	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# clean:
# 	$(RM) $(OBJS)

# fclean: clean
# 	$(RM) $(NAME)

# re : fclean all

# .PHONY: all clean fclean re
