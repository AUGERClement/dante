/*
** my_putnbr_base.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/printing
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:11:33 2016 delphine godet
** Last update Sun Dec 18 17:27:43 2016 delphine godet
*/

#include "my.h"

void	my_putnbr_base(int nbr, char *base)
{
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = -nbr;
    }
  if ((unsigned) nbr >= my_strlen(base))
    my_putnbr_base((nbr / my_strlen(base)), base);
  my_putchar(base[nbr % my_strlen(base)]);
}
