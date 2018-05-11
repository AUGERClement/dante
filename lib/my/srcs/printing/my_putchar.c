/*
** my_putchar.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/printing
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:11:17 2016 delphine godet
** Last update Sat Nov 19 01:11:21 2016 delphine godet
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
