/*
** my_strlowcase.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/str_change
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:17:14 2016 delphine godet
** Last update Mon Mar  6 14:15:03 2017 delphine godet
*/

#include <stdlib.h>

char		*my_strlowcase(char *str)
{
  size_t	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] = str[i] + 32;
      i++;
    }
  return (str);
}
