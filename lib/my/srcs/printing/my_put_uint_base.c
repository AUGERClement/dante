/*
** my_put_uint_base.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/printing
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:18:41 2016 delphine godet
** Last update Sun Dec 18 01:19:26 2016 delphine godet
*/

#include "my.h"

void     my_put_uint_base(unsigned int nb, char *base)
{
  if (nb >= my_strlen(base))
    my_put_uint_base((nb / my_strlen(base)), base);
  my_putchar(base[nb % my_strlen(base)]);
}
