# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htynisha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/28 19:51:11 by htynisha          #+#    #+#              #
#    Updated: 2019/05/30 15:45:46 by htynisha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
SRC := $(wildcard *.c)
SRO := $(wildcard *.o)
INCLUDE := includes/
CC_FLAGS := -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 
		gcc -c $(CC_FLAGS) $(SRC) -I $(INCLUDE)
		ar -rc $(NAME) $(SRO)
		ranlib $(NAME)

clean:
		rm -f *.o ~*
			
fclean: clean
		rm -f $(NAME)

re: fclean all

try:
	@echo $(notdir $(SRC))
