##
## Makefile for dante in /home/yami/dante/generator
## 
## Made by yami
## Login   <yami>
## 
## Started on  Thu May 11 05:23:27 2017 yami
## Last update Thu May 11 18:00:12 2017 yami
##

SRCS	=	srcs/arguments_manager.c	\
		srcs/binary_tree_algo.c		\
		srcs/error_manager.c		\
		srcs/fct_ptrs.c			\
		srcs/generate_cells_ne.c	\
		srcs/generate_cells_nw.c	\
		srcs/generate_cells_se.c	\
		srcs/generate_cells_sw.c	\
		srcs/generate_maze.c		\
		srcs/imperfect_mazes.c		\
		srcs/init_cells.c		\
		srcs/printing.c			\
		srcs/save_maze.c		\
		srcs/main.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	generator

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
