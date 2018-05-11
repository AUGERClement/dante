##
## Makefile for emacs in /home/delphine.godet/secure_place/srcs
## 
## Made by delphine godet
## Login   <delphine.godet@epitech.net>
## 
## Started on  Sun Dec 18 01:04:06 2016 delphine godet
## Last update Sun Dec 18 17:14:12 2016 delphine godet
##

SRCS	=	my_strlen.c		\
		my_str_isalpha.c	\
		my_str_isnum.c		\
		my_str_islower.c	\
		my_str_isupper.c	\
		my_str_isprintable.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-Wall -Wextra -Werror -I../../include/

NAME	=	libdef.a

all:		$(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
		mv $(NAME) ../../

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) ../../$(NAME)

re:		fclean all
