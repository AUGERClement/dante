/*
** my_strcpy.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/hold_strs
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:08:15 2016 delphine godet
** Last update Tue Jan 31 18:41:29 2017 delphine godet
*/

#include <stdlib.h>

char		*my_strcpy(char *dest, char *src)
{
  size_t	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = src[i];
  return (dest);
}
