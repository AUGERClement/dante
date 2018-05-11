##
## Makefile for emacs in /home/delphine.godet/secure_place/srcs
## 
## Made by delphine godet
## Login   <delphine.godet@epitech.net>
## 
## Started on  Sun Dec 18 01:04:06 2016 delphine godet
## Last update Tue Jan 31 18:05:23 2017 delphine godet
##

SRCS	=	my_revstr.c		\
		my_strcapitalize.c	\
		my_strlowcase.c		\
		my_char_swap.c		\
		my_strupcase.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-Wall -Wextra -Werror -I../../include/

NAME	=	libchange.a

all:		$(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
		mv $(NAME) ../../

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) ../../$(NAME)

re:		fclean all
