CC = gcc

CFLAGS = -Wall -Werror -Wextra -g

SRC = ft_util.c rush02.c

OBJ = $(SRC:.c=.o)

all: rush-02

rush-02: $(OBJ)
	$(CC) $(CFLAGS) -o rush-02 $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) rush-02

fclean: clean
	rm -f *~

re: fclean all
