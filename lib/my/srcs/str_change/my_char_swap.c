/*
** my_char_swap.c for emacs in /home/delphine.godet/PSU_2016_navy/lib/my/srcs/str_change
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Tue Jan 31 17:57:35 2017 delphine godet
** Last update Tue Jan 31 18:35:04 2017 delphine godet
*/

#include <stdlib.h>

char	*my_char_swap(char *str, size_t i, size_t j)
{
  char	c;

  c = str[i];
  str[i] = str[j];
  str[j] = c;
  return (str);
}
