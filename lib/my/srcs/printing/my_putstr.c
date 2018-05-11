/*
** my_putstr.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/printing
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:18:28 2016 delphine godet
** Last update Sun Dec 11 17:46:47 2016 delphine godet
*/

#include "my.h"

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
