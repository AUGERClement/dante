/*
** my_str_isprintable.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/str_def
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:20:34 2016 delphine godet
** Last update Tue Jan 31 18:34:39 2017 delphine godet
*/

#include <stdlib.h>

int		my_str_isprintable(char *str)
{
  size_t	i;

  i = 0;
  if (str[i] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if (str[i] >= ' ' || str[i] <= '~')
	i++;
      else
	return (0);
    }
  return (1);
}
