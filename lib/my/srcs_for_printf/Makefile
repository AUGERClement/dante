##
## Makefile for emacs in /home/delphine.godet/PSU_2016_my_printf
## 
## Made by delphine godet
## Login   <delphine.godet@epitech.net>
## 
## Started on  Sat Nov 19 01:28:15 2016 delphine godet
## Last update Tue Jan 31 21:07:08 2017 delphine godet
##

SRCS	=	my_printf.c			\
		sum_stdarg.c			\
		disp_stdarg.c			\
		helps/my_stock_nbr_base.c	\
		helps/my_padd_nbr_base.c	\
		conversion_specifiers/one.c	\
		conversion_specifiers/two.c	\
		conversion_specifiers/three.c	\
		conversion_specifiers/mod_d.c	\

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-I../include/

NAME	=	libprintf.a

all:		$(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
		mv $(NAME) ../

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) ../$(NAME)

re:		fclean all
