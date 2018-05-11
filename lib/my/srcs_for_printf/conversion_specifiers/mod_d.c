/*
** mod_d.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs_for_printf/conversion_specifiers
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:25:24 2016 delphine godet
** Last update Tue Jan 31 21:00:32 2017 delphine godet
*/

#include "my.h"

/* %d && %i */
void     my_mod_d(char *fmt, int i, va_list ap)
{
  long int	nb;

  if (fmt[i - 1] == 'h')
    nb = (short) va_arg(ap, int);
  else if (fmt[i - 1] == 'l')
    nb = (long) va_arg(ap, int);
  else
    nb = va_arg(ap, int);
  if (fmt[i - 1] == ' ')
    if (nb >= 0)
      my_putchar(' ');
  else if (fmt[i - 1] == '+')
    if (nb >= 0)
      my_putchar('+');
  my_put_nbr(nb);
}
