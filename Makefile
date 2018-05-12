##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

GENERATOR=	$(realpath generator/)

SOLVER=		$(realpath solver/)

NAME=		dante

all:		$(NAME)

$(NAME):
		$(MAKE) -C $(GENERATOR)
		$(MAKE) -C $(SOLVER)

clean:
		@find . -name "*~" -delete
		@rm -f *.o

fclean:		clean
		@$(MAKE) -C $(GENERATOR) fclean
		@$(MAKE) -C $(SOLVER) fclean

re:		fclean all

.PHONY:		all clean fclean re
