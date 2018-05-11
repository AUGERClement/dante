##
## Makefile for emacs in /home/delphine.godet/secure_place/srcs/hold_strs
## 
## Made by delphine godet
## Login   <delphine.godet@epitech.net>
## 
## Started on  Sun Dec 18 00:54:21 2016 delphine godet
## Last update Mon Apr  3 23:51:13 2017 yami
##

SRCS	=	my_strcat.c		\
		my_strncat.c		\
		my_strcmp.c		\
		my_strcmp_nocase.c	\
		my_strncmp.c		\
		my_strcpy.c		\
		epur_str.c		\
		my_strncpy.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-Wall -Wextra -Werror -I../../include/

NAME	=	libstrs.a

all:		$(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
		mv $(NAME) ../../

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) ../../$(NAME)

re:		fclean all
