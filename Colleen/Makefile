SRC = Colleen.c

NAME = Colleen

BIN = $(addprefix ./, $(NAME))

CC = gcc

FLAGS = -Wall -Werror -Wextra

CHILD = child.c

all:
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

test: all
	$(BIN) > $(CHILD)
	diff $(SRC) $(CHILD)

clean:
	rm -fv $(NAME)
	rm -fv $(CHILD)
