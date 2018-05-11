/*
** my_put_nbr.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/printing
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:12:39 2016 delphine godet
** Last update Sat Nov 19 01:13:30 2016 delphine godet
*/

#include "my.h"

void	my_put_nbr(int nb)
{
  if (nb == -2147483648)
    my_putstr("-2147483648");
  else
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb = -nb;
	}
      if (nb >= 10)
	my_put_nbr(nb / 10);
      my_putchar((nb % 10) + '0');
    }
}
