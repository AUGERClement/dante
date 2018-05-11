##
## Makefile for dante in /home/yami/dante/generator
##
## Made by yami
## Login   <yami>
##
## Started on  Thu May 11 05:23:27 2017 yami
## Last update Wed May 17 16:22:48 2017 yami
##

SRCS	=	srcs/depth_first_search.c	\
		srcs/load_maze.c		\
		srcs/printing.c			\
		srcs/main.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	solver

CFLAGS	+=	-Wall -Wextra -Werror -Iinclude/ -I../include/

LDFLAGS	=	-L../lib/my/ -lmy

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
