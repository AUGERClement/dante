/*
** my_putstr_error.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/printing
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:18:17 2016 delphine godet
** Last update Sun Dec 11 17:46:53 2016 delphine godet
*/

#include "my.h"

void	my_putstr_error(char *str)
{
  write(2, str, my_strlen(str));
}
