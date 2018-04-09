##
## EPITECH PROJECT, 2017
## Makafile
## File description:
## Makefile by francois.lagadec@epitech.eu
##

SRC_DIR=	$(realpath .)

SRC=		*.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-I ../../include/

NAME=		libmy.a

all:		$(NAME)

$(NAME):
		gcc -c $(SRC) $(CFLAGS)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

clean:
		@rm -f $(OBJ)
		@rm -f *~

fclean:		clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
