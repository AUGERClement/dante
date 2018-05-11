/*
** my_find_prime_sup.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/not_done
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:09:43 2016 delphine godet
** Last update Sun Dec 11 17:43:41 2016 delphine godet
*/

#include "my.h"

int	my_find_prime_sup(int nb)
{
  int	res;

  res = my_is_prime(nb);
  while (res != 1)
    {
      nb += 1;
      res = my_is_prime(nb);
    }
  return (nb);
}
