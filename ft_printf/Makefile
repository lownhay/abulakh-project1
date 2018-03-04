#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abulakh <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 19:46:54 by abulakh           #+#    #+#              #
#    Updated: 2018/02/24 19:46:55 by abulakh          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_printf

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HIDDIRS = -I . ft_printf.h

SRC = ft_printf_start.c ./gnltry2/get_next_line.c

RM = rm -f

OBJ = $(patsubst %.c,./%.o,$(SRC))

MAKE = make

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -C ./gnltry2/libft
	@$(CC) $(CFLAGS) $(OBJ) -L gnltry2/libft/ -lft -o $(NAME)

./%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@$(MAKE) clean -C ./gnltry2/libft
	@$(RM) $(OBJ)

fclean: clean
	@$(MAKE) fclean -C ./gnltry2/libft
	@$(RM) $(NAME) alum

re: fclean all

.PHONY: clean fclean re