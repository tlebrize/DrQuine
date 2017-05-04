SRC = Grace.c

NAME = Grace

BIN = $(addprefix ./, $(NAME))

CC = gcc

FLAGS = -Wall -Werror -Wextra

CHILD = Grace_kid.c

all:
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

test: all
	$(BIN)
	diff $(SRC) $(CHILD)

clean:
	rm -fv $(NAME)
	rm -fv $(CHILD)
