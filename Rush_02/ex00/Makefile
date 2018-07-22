# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 22:04:27 by athevene          #+#    #+#              #
#    Updated: 2018/07/21 22:14:19 by athevene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM_NAME = "colle-2"

SRC = io/read_in.c \
	  ft/ft_strlen.c \
	  ft/ft_strcat.c \
	  main.c

all: $(PROGRAM_NAME)

$(PROGRAM_NAME):
	gcc -c $(SRC);
	gcc -o $(PROGRAM_NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(PROGRAM_NAME)

re: fclean all
