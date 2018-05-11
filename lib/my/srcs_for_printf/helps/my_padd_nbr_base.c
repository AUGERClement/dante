/*
** my_padd_nbr_base.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs_for_printf/helps
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:23:18 2016 delphine godet
** Last update Sat Mar 25 00:00:41 2017 yami
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

char     *my_padd_nbr_base(int nb, char *base)
{
  char  *str;
  int   i;

  i = 2;
  if ((str = xmalloc(4, 1)) == NULL)
    return (NULL);
  str[3] = '\0';
  while (i >= 0)
    str[i--] = '0';
  i = 2;
  my_stock_nbr_base(nb, base, str, i);
  return (str);
}
