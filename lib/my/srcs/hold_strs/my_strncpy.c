/*
** my_strncpy.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/hold_strs
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:08:36 2016 delphine godet
** Last update Tue Jan 31 18:40:34 2017 delphine godet
*/

#include <stdlib.h>
#include "my.h"

char		*my_strncpy(char *dest, char *src, size_t n)
{
  size_t	i;

  i = 0;
  while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  if (n > my_strlen(src))
    dest[i] = '\0';
  return (dest);
}
