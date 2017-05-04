SRC = Sully.c

NAME = Sully

BIN = $(addprefix ./, $(NAME))

CC = gcc

FLAGS = -Wall -Werror -Wextra

CHILD5 = Sully_5.c
CHILD4 = Sully_4.c
CHILD3 = Sully_3.c
CHILD2 = Sully_2.c
CHILD1 = Sully_1.c
CHILD0 = Sully_0.c

all:
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

test: all
	$(BIN)
	diff $(SRC) $(CHILD5) || exit 0
	diff $(SRC) $(CHILD4) || exit 0
	diff $(SRC) $(CHILD3) || exit 0
	diff $(SRC) $(CHILD2) || exit 0
	diff $(SRC) $(CHILD1) || exit 0
	diff $(SRC) $(CHILD0) || exit 0

clean:
	rm -fv $(NAME)
	rm -fv $(CHILD5)
	rm -fv $(subst .c,,$(CHILD5))
	rm -fv $(CHILD4)
	rm -fv $(subst .c,,$(CHILD4))
	rm -fv $(CHILD3)
	rm -fv $(subst .c,,$(CHILD3))
	rm -fv $(CHILD2)
	rm -fv $(subst .c,,$(CHILD2))
	rm -fv $(CHILD1)
	rm -fv $(subst .c,,$(CHILD1))
	rm -fv $(CHILD0)
	rm -fv $(subst .c,,$(CHILD0))
