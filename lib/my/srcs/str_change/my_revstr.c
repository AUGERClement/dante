/*
** my_revstr.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/str_change
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:16:26 2016 delphine godet
** Last update Fri Mar 24 23:55:50 2017 yami
*/

#include <stdlib.h>
#include "my.h"

char		*my_revstr(char *str)
{
  size_t	i;
  size_t	j;
  char		*s2;

  s2 = xmalloc(my_strlen(str) + 1, 1);
  i = 0;
  j = my_strlen(str) - 1;
  while (i < my_strlen(str))
    {
      s2[i] = str[j];
      j--;
      i++;
    }
  s2[i] = '\0';
  return (s2);
}
