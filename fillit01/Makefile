#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abulakh <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/25 20:59:08 by abulakh           #+#    #+#              #
#    Updated: 2017/10/25 20:59:09 by abulakh          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

.PHONY: all clean fclean re

.NOTPARALLEL: all clean fclean re
	
all: 
	gcc -I -Wall -Wextra -Werror -L. -lft fillit.c checkvalid.c ft_strsplit2.c

clean:
	rm -f *.o

fclean: clean
	rm -f a.out

re: fclean all
