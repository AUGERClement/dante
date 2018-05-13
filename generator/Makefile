##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC_DIR=	$(realpath src/)

HEADER_DIR=	$(realpath include/)

SRC=		$(SRC_DIR)/main.c \
		$(SRC_DIR)/binary_tree.c \
		$(SRC_DIR)/maze.c \
		$(SRC_DIR)/maze_generator.c \
		$(SRC_DIR)/prepare_maze.c \
		$(SRC_DIR)/maze_transform.c

OBJ=		$(SRC:.c=.o)

CFLAGS +=	-I$(HEADER_DIR)

NAME=		generator

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) -I$(HEADER_DIR)

clean:
		@rm -f $(OBJ)
		@find . -name "*~" -delete

fclean:		clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re

debug:		$(OBJ)
		make re CC="gcc -g3"
