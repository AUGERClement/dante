##
## Makefile for emacs in /home/delphine.godet/secure_place/srcs
##
## Made by delphine godet
## Login   <delphine.godet@epitech.net>
##
## Started on  Sun Dec 18 01:04:06 2016 delphine godet
## Last update Sat Apr  1 03:43:20 2017 Delphine Godet
##

SRCS	=	my_isneg.c		\
		my_swap.c		\
		my_power_rec.c		\
		my_is_prime.c		\
		my_find_prime_sup.c	\
		my_itoa.c		\
		my_getnbr.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-Wall -Wextra -Werror -I../../include/

NAME	=	libnbr.a

all:		$(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
		mv $(NAME) ../../

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) ../../$(NAME)

re:		fclean all
