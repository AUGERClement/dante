/*
** my_strdup.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:09:13 2016 delphine godet
** Last update Fri Mar 24 23:46:52 2017 yami
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

char		*my_strdup(char *src)
{
  char		*str;
  size_t	i;
  size_t	length;

  i = 0;
  length = my_strlen(src);
  str = xmalloc(1, length + 1);
  while (i <= length)
    {
      str[i] = src[i];
      i++;
    }
  return (str);
}
