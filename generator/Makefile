##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC_DIR=	$(realpath src/)

HEADER_DIR=	$(realpath include/)

LIB_DIR=	$(realpath lib/my/)

SRC=		$(SRC_DIR)/main.c \
		$(SRC_DIR)/perfect_maze.c \
		$(SRC_DIR)/imperfect_maze.c

OBJ=		$(SRC:.c=.o)

FLAGS=		-L. lib/my/libmy.a -lm

CFLAGS +=	-I$(HEADER_DIR)

NAME=		generator

all:		$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C $(LIB_DIR)
		gcc -o $(NAME) $(OBJ) $(FLAGS) -I$(HEADER_DIR)

clean:
		@rm -f $(OBJ)
		@find . -name "*~" -delete
		@rm -f *.o

fclean:		clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re

debug:		$(OBJ)
		$(MAKE) -C $(LIB_DIR)
		make re CC="gcc -g3"
