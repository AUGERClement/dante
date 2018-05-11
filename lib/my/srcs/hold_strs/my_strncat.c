/*
** my_strncat.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/hold_strs
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:08:26 2016 delphine godet
** Last update Tue Jan 31 18:41:45 2017 delphine godet
*/

#include "my.h"

char		*my_strncat(char *dest, char *src, size_t nb)
{
  size_t	i;
  size_t	j;

  i = 0;
  j = my_strlen(dest);
  while (src[i] != '\0' && i != nb)
    dest[j++] = src[i++];
  dest[j] = '\0';
  return (dest);
}
