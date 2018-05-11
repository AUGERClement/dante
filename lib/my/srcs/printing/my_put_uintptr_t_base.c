/*
** my_put_uintptr_t_base.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/printing
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:18:52 2016 delphine godet
** Last update Sat Nov 19 01:18:53 2016 delphine godet
*/

#include "my.h"

void     my_put_uintptr_t_base(uintptr_t p, char *base)
{
  if (p >= my_strlen(base))
    my_put_uintptr_t_base((p / my_strlen(base)), base);
  my_putchar(base[p % my_strlen(base)]);
}
