/*
** my_stock_nbr_base.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs_for_printf/helps
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:24:33 2016 delphine godet
** Last update Sat Nov 19 01:30:37 2016 delphine godet
*/

#include "my.h"

char	*my_stock_nbr_base(int nbr, char *base, char *str, int i)
{
  if (nbr >= my_strlen(base))
    my_stock_nbr_base((nbr / my_strlen(base)), base, str, i - 1);
  str[i] = (base[nbr % my_strlen(base)]);
  return (str);
}
