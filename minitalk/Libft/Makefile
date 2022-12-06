# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 23:04:44 by oakyuz            #+#    #+#              #
#    Updated: 2022/04/13 05:02:14 by oakyuz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror -I. -c
FILES	:= $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")
OBJ		:= $(FILES:%.c=%.o)

BSRC	:= $(wildcard ft_lst*.c)
B_OBJ	:= $(BSRC:%.c=%.o)

all:	$(NAME)

$(NAME): $(OBJ)
	ar	-rcs $(NAME) $(OBJ)

bonus:	$(OBJ) $(B_OBJ)
	ar	-rcs $(NAME) $(OBJ) $(B_OBJ)

clean:
	@rm -f *.o

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

.PHONY:	all	bonus clean fclean re
