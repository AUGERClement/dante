##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC_DIR=	$(realpath src/)

HEADER_DIR=	$(realpath include/)

SRC=		$(SRC_DIR)/main.c \
		$(SRC_DIR)/solver.c \
		$(SRC_DIR)/get_next_line.c \
		$(SRC_DIR)/free_ptr.c

OBJ=		$(SRC:.c=.o)

CFLAGS +=	-I$(HEADER_DIR)

NAME=		solver

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) -I$(HEADER_DIR)

clean:
		@rm -f $(OBJ)
		@find . -name "*~" -delete
		@rm -f *.o

fclean:		clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re

debug:		$(OBJ)
		make re CC="gcc -g3"
