# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oakyuz <oakyuz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 22:21:55 by oakyuz            #+#    #+#              #
#    Updated: 2023/01/18 05:30:44 by oakyuz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name	= push_swap
cc		= gcc
FLAGS	= -Wall -Wextra -Werror
SRCS	= $(shell find src/*.c include/Libft/*.c)
LIBFT	= include/Libft/libft.a

INCLUDE = include/Libft
OBJ = $(SRCS:.c=.o)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@ -I include -I $(INCLUDE)

all : $(NAME)

$(NAME) : $(LIBFT) $(OBJ)
	@$(MAKE) all bonus -C include/Libft/
	@$(CC) $(FLAGS) $(OBJ) $(LIBFT) -I include -I $(INCLUDE) -o $(NAME)
	@echo OK

re: fclean all

$(LIBFT);
	make -C include/Libft

clean:
	@rm -rf $(NAME)
	@find . -name *.o -delete
	@make clean -C include/Libft

fclean: clean
	rm push_swap
	make fclean -C include/Libft

norm:
	norminette $(SRCS)
	norminette */*.h

.PHONY: all $(NAME) re clean fclean
