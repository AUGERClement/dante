##
## Makefile for dante in /home/yami/dante/generator
##
## Made by yami
## Login   <yami>
##
## Started on  Thu May 11 05:23:27 2017 yami
## Last update Sun May 14 22:31:48 2017 yami
##

SRCS	=	srcs/astar.c		\
		srcs/load_maze.c	\
		srcs/printing.c		\
		srcs/main.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	solver

CFLAGS	+=	-Wall -Wextra -Iinclude/ -I../include/ -g

LDFLAGS	=	-L../lib/my/ -lmy -lm

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
