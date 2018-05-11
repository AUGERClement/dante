/*
** my_strupcase.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/str_change
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:17:39 2016 delphine godet
** Last update Tue Jan 31 18:56:58 2017 delphine godet
*/

#include <stdlib.h>

char		*my_strupcase(char *str)
{
  size_t	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
      i++;
    }
  return (str);
}
