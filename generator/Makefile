##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## build something
##

SRCDOS=		./src/

SRC=		$(SRCDOS)binary_tree.c		\
		$(SRCDOS)main.c			\
		$(SRCDOS)maze.c			\
		$(SRCDOS)maze_generator.c	\
		$(SRCDOS)maze_transform.c	\
		$(SRCDOS)prepare_maze.c

OBJ=	$(SRC:.c=.o)

CFLAGS=	-Wall -Wextra -W -Iinclude

NAME=	generator

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
