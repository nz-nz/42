# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htynisha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/28 19:51:11 by htynisha          #+#    #+#              #
#    Updated: 2019/06/08 18:08:13 by htynisha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
SRC := $(wildcard *.c)
SRO := $(wildcard *.o)
DDD := @echo *.c
INCLUDE := includes/
CC_FLAGS := -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 
		gcc -c $(CC_FLAGS) $(SRC) -I $(INCLUDE)
		ar -rc $(NAME) $(patsubst %.c, %.o, $(SRC))
		ranlib $(NAME)

clean:
		rm -f *.o ~*
			
fclean: clean
		rm -f $(NAME)

re: fclean all

c:
	@echo $(notdir $(SRC))
