/*
** my_strlen.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/str_def
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:20:46 2016 delphine godet
** Last update Sun Dec 18 01:21:07 2016 delphine godet
*/

#include <stdlib.h>

size_t		my_strlen(char *str)
{
  size_t	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
