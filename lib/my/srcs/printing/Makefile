##
## Makefile for emacs in /home/delphine.godet/secure_place/srcs
## 
## Made by delphine godet
## Login   <delphine.godet@epitech.net>
## 
## Started on  Sun Dec 18 01:04:06 2016 delphine godet
## Last update Sun Dec 18 17:13:13 2016 delphine godet
##

SRCS	=	my_putchar.c		\
		my_putstr.c		\
		my_putstr_error.c	\
		my_showstr.c		\
		my_put_nbr.c		\
		my_putnbr_base.c	\
		my_put_uint_base.c	\
		my_put_uintptr_t_base.c


OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-Wall -Wextra -Werror -I../../include/

NAME	=	libprint.a

all:		$(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
		mv $(NAME) ../../

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) ../../$(NAME)

re:		fclean all
