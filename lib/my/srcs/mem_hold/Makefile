##
## Makefile for emacs in /home/delphine.godet/secure_place/srcs
##
## Made by delphine godet
## Login   <delphine.godet@epitech.net>
##
## Started on  Sun Dec 18 01:04:06 2016 delphine godet
## Last update Thu Apr  6 20:49:35 2017 Delphine Godet
##

SRCS	=	xmalloc.c	\
		my_realloc.c	\
		my_strdup.c	\
		my_strndup.c	\
		my_memset.c	\
		my_strsep.c	\
		my_tabdup.c	\
		free_tab.c	\
		get_next_line.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-Wall -Wextra -Werror -I../../include/

NAME	=	liballoc.a

all:		$(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
		mv $(NAME) ../../

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) ../$(NAME)

re:		fclean all
