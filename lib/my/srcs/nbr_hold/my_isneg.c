/*
** my_isneg.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/nbr_hold
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:06:54 2016 delphine godet
** Last update Tue Jan 31 18:38:29 2017 delphine godet
*/

#include <unistd.h>

int	my_isneg(int n)
{
  (n < 0 ? write(1, "N", 1) : write(1, "P", 1));
  return (0);
}
