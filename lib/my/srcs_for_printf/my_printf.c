/*
** my_printf.c for emacs in /home/delphine.godet/PSU_2016_my_printf
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:29:03 2016 delphine godet
** Last update Wed Feb  1 15:44:09 2017 delphine godet
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

t_specifiers	specifiers[] =
  {
    {'%', &my_mod_mod},
    {'o', &my_mod_o},
    {'u', &my_mod_u},
    {'x', &my_mod_x},
    {'X', &my_mod_xmaj},
    {'b', &my_mod_b},
    {'s', &my_mod_s},
    {'S', &my_mod_smaj},
    {'d', &my_mod_d},
    {'i', &my_mod_d},
    {'c', &my_mod_c},
    {'p', &my_mod_p},
    {' ', 0},
    {'\0', 0},
  };

void	find_mod(char *fmt, va_list ap, int i)
{
  int	j;
  int	check;

  j = check = 0;
  while (specifiers[j].c != '\0' && check == 0)
    {
      if (fmt[i] == specifiers[j].c)
	{
	  specifiers[j].fct(fmt, i, ap);
	  check = 1;
	}
      j++;
    }
  if (specifiers[j].c == '\0')
    {
      my_putchar(fmt[i - 1]);
      my_putchar(fmt[i]);
    }
}

int	fct_annex(char *fmt, va_list ap, int i)
{
  if (fmt[i] == '#' || fmt[i] == ' ' ||
      fmt[i] == '+' || fmt[i] == 'h' ||
      fmt[i] == 'l')
    {
      find_mod(fmt, ap, i + 1);
      i += 2;
    }
  else
    {
      find_mod(fmt, ap, i);
      i++;
    }
  return (i);
}

int	my_printf(char *fmt, ...)
{
  va_list	ap;
  int		i;

  va_start(ap, fmt);
  i = 0;
  while (fmt[i] != '\0')
    {
      if (fmt[i] == '%')
	{
	  i++;
	  if (fmt[i] == '\0')
	    return (84);
	  i = fct_annex(fmt, ap, i);
	}
      else
	{
	  my_putchar(fmt[i++]);
	}
    }
  va_end(ap);
  return (0);
}
