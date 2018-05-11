/*
** disp_stdarg.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs_for_printf
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:21:15 2016 delphine godet
** Last update Sun Dec 11 17:50:38 2016 delphine godet
*/

#include "my.h"

int	disp_stdarg(char *s, ...)
{
  va_list	ap;

  va_start(ap, s);
  while (*s)
    {
      if (*s == 'c')
	{
	  my_putchar((char) va_arg(ap, int));
	  my_putchar('\n');
	}
      else if (*s == 'i')
	{
	  my_put_nbr(va_arg(ap, int));
	  my_putchar('\n');
	}
      else if (*s == 's')
	{
	  my_putstr(va_arg(ap, char *));
	  my_putchar('\n');
	}
      s++;
    }
  va_end(ap);
}
