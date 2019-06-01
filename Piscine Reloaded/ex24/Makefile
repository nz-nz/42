# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htynisha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/28 19:51:11 by htynisha          #+#    #+#              #
#    Updated: 2019/04/28 19:52:54 by htynisha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
SRC := srcs/
INCLUDE := includes/
CC_FLAGS := -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 
		gcc -c $(CC_FLAGS) $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_strcmp.c \
				   	$(SRC)ft_strlen.c $(SRC)ft_swap.c -I $(INCLUDE)
			ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

clean:
		rm -f *.o ~*
			
fclean: clean
		rm -f $(NAME)

re: fclean all
