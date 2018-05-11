/*
** three.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs_for_printf/conversion_specifiers
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:27:53 2016 delphine godet
** Last update Tue Jan 31 21:02:40 2017 delphine godet
*/

#include "my.h"

/* %S */
void     my_mod_smaj(char *fmt, int i, va_list ap)
{
  char	*s;

  s = my_strdup(va_arg(ap, char *));
  while (*s)
    {
      if (*s >= ' ' && *s <= '~')
	my_putchar(*s++);
      else
	{
	  my_putchar('\\');
	  my_putstr(my_padd_nbr_base(*s++, "01234567"));
	}
    }
}
