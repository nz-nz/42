# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: htynisha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/28 19:51:11 by htynisha          #+#    #+#              #
#    Updated: 2019/05/03 16:08:00 by htynisha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC := main.c
DEST := ft_display_file
CC_FLAGS := -Wall -Wextra -Werror

all: $(DEST)

$(DEST): 
		gcc $(CC_FLAGS) -o $(DEST) $(SRC)

clean:
		rm -f *.o ~*
			
fclean: clean
		rm -f $(DEST)
