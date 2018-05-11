/*
** my_strdup.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:09:13 2016 delphine godet
** Last update Fri Mar 24 23:47:00 2017 yami
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

char		*my_strndup(char *src, size_t n)
{
  char		*str;
  size_t	i;

  i = 0;
  str = xmalloc(1, n + 1);
  while (i < n)
    {
      str[i] = src[i];
      i++;
    }
  str[n] = '\0';
  return (str);
}
