/*
** my_showstr.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/printing
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:19:05 2016 delphine godet
** Last update Tue Jan 31 18:25:01 2017 delphine godet
*/

#include "my.h"

void	my_showstr(char *str)
{
  while (*str)
    {
      if (*str >= ' ' && *str <= '~')
	my_putchar(*(str++));
      else
	{
	  my_putchar('\\');
	  my_putnbr_base(*(str++), "0123456789abcdef");
	}
    }
}
