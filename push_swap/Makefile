# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 18:58:47 by oakyuz            #+#    #+#              #
#    Updated: 2022/12/21 23:19:52 by oakyuz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= gcc
FLAG	= -Wall -Wextra -Werror
SRC		= $(shell find . -name "*.c")
OBJ		= $(SRC:.c=.o)

INCLUDE = -I./include
LIBFT	= ./include/Libft/libft.a

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(LIBFT):
	@$(MAKE) -C ./include/Libft/ all bonus

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(FLAG) $(OBJ) $(LIBFT) -o $(NAME)

clean :
	rm ./push_swap
	rm ./include/Libft/*.o
	rm ./src/*.o

fclean:
	rm -f ./push_swap

re	:
	clean all

