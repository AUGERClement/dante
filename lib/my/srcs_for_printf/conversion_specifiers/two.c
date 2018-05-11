/*
** two.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs_for_printf/conversion_specifiers
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:27:37 2016 delphine godet
** Last update Sun Apr  9 18:11:47 2017 yami
*/

#include <stdlib.h>

#include "my.h"

/* %% */
void     my_mod_mod(char *fmt, int i, va_list ap)
{
  my_putchar('%');
}

/* %s */
void     my_mod_s(char *fmt, int i, va_list ap)
{
  char	*s;

  s = my_strdup(va_arg(ap, char *));
  my_putstr(s);
  free(s);
}

/* %c */
void     my_mod_c(char *fmt, int i, va_list ap)
{
  my_putchar((char) va_arg(ap, int));
}

/* %p */
void     my_mod_p(char *fmt, int i, va_list ap)
{
  uintptr_t	p;

  p = (uintptr_t) va_arg(ap, void *);
  my_putstr("0x");
  my_put_uintptr_t_base(p, "0123456789abcdef");
}
