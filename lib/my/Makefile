##
## Makefile for emacs in /home/delphine.godet/PSU_2016_my_printf
## 
## Made by delphine godet
## Login   <delphine.godet@epitech.net>
## 
## Started on  Sat Nov 19 01:28:15 2016 delphine godet
## Last update Mon Apr  3 23:53:29 2017 yami
##

SRCS	=	libchange.a	\
		libdef.a	\
		liballoc.a	\
		libnbr.a	\
		libprint.a	\
		libprintf.a	\
		libstrs.a

NAME	=	libmy.a

CFLAGS	+=	-Iinclude/

all:		$(NAME)

libchange.a:
		make -C ./srcs/str_change/

libdef.a:
		make -C ./srcs/str_def/

liballoc.a:
		make -C ./srcs/mem_hold/

libnbr.a:
		make -C ./srcs/nbr_hold/

libprint.a:
		make -C ./srcs/printing/

libprintf.a:
		make -C ./srcs_for_printf/

libstrs.a:		
		make -C ./srcs/hold_strs/

$(NAME):	$(SRCS)
		$(RM) $(NAME)
		ar rcT $(NAME) $(SRCS)
		touch $(NAME)
#		ranlib $(NAME)

clean:
		make clean -C ./srcs_for_printf/
		make clean -C ./srcs/mem_hold/
		make clean -C ./srcs/hold_strs/
		make clean -C ./srcs/nbr_hold/
		make clean -C ./srcs/str_def/
		make clean -C ./srcs/str_change/
		make clean -C ./srcs/printing/
		rm -f $(SRCS)

fclean: 	clean
		make fclean -C ./srcs_for_printf/
		make fclean -C ./srcs/mem_hold/
		make fclean -C ./srcs/hold_strs/
		make fclean -C ./srcs/nbr_hold/
		make fclean -C ./srcs/str_def/
		make fclean -C ./srcs/str_change/
		make fclean -C ./srcs/printing/
		rm -f $(NAME)

re:		fclean all
