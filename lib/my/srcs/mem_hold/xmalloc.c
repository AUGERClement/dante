/*
** my_malloc.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:09:04 2016 delphine godet
** Last update Fri Mar 24 23:45:31 2017 yami
*/

#include <stdio.h>
#include <stdlib.h>

void	*xmalloc(size_t len, size_t s)
{
  void	*r;

  if ((r = malloc(s * len)) == NULL)
    exit(84);
  return (r);
}
