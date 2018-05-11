/*
** sum_stdarg.c for emacs in /home/delphine.godet/bootstrap_test
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Mon Nov  7 14:16:55 2016 delphine godet
** Last update Sat Nov 19 01:21:48 2016 delphine godet
*/

#include "my.h"

int	sum_stdarg(int i, int nb, ...)
{
  va_list	ap;
  int		d;

  d = 0;
  va_start(ap, nb);
  while (nb > 0)
    {
      if (i == 0)
  	d = d + va_arg(ap, int);
      if (i == 1)
  	d = d + my_strlen(va_arg(ap, char *));
      nb--;
    }
  va_end(ap);
  return (d);
}
