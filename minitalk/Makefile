CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

LIBFT	= Libft/libft.a
SRC		= Libft/*.c

SRNAME	= server
CLNAME	= client

all: $(CLNAME) $(SRNAME)

$(SRNAME): $(LIBFT)
	$(CC)	$(CFLAGS)	$(SRC)	$(LIBFT) server.c -o $(SRNAME)

$(CLNAME):	$(LIBFT)
	$(CC)	$(CFLAGS)	$(SRC)	$(LIBFT) client.c -o $(CLNAME)

clean:
	rm server client
fclean:
	rm -f server client
re: clean all

$(LIBFT):
	$(MAKE) -C Libft/
