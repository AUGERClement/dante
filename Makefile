##
## Makefile for dante in /home/yami/dante
## 
## Made by yami
## Login   <yami>
## 
## Started on  Tue Apr 25 19:26:36 2017 yami
## Last update Sat May 13 00:10:44 2017 yami
##

all:
		make -s -C lib/my/
		make -C generator/
		make -C depth/
		make -C breadth/
		make -C astar/
		make -C tournament/

clean:
		make clean -s -C lib/my/
		make clean -C generator/
		make clean -C depth/
		make clean -C breadth/
		make clean -C astar/
		make clean -C tournament/


fclean:		clean
		make fclean -s -C lib/my/
		make fclean -C generator/
		make fclean -C depth/
		make fclean -C breadth/
		make fclean -C astar/
		make fclean -C tournament/

re:		fclean all
