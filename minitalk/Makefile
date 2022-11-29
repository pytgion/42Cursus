CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFT = include/Libft/libft.a
SRC		= include/Libft/*.c

SRNAME = server
CLNAME = client

all: $(CLNAME) $(SRNAME)

$(SRNAME): $(LIBFT)
	$(CC)  $(SRC) $(LIBFT) server.c -o $(SRNAME)

$(CLNAME): $(LIBFT)
	$(CC)  $(SRC) $(LIBFT) client.c -o $(CLNAME)

clean:
	rm server client

fclean: clean
	rm -f server client

re: clean all

$(LIBFT):
	$(MAKE) -C include/Libft/
