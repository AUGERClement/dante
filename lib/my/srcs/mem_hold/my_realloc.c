/*
** get_max_coord.c for emacs in /home/delphine.godet/wireframe/src
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Tue Dec  6 19:06:29 2016 delphine godet
** Last update Fri Mar 24 23:46:22 2017 yami
*/

#include <stdlib.h>
#include "my.h"

char            *my_realloc(char *to_realloc, size_t size)
{
  char          *new;
  size_t	i;

  i = 0;
  new = xmalloc(1, size + 1);
  if (to_realloc != NULL)
    {
      while (to_realloc[i] != '\0')
	{
	  new[i] = to_realloc[i];
	  i++;
	}
      new[i] = '\0';
      free(to_realloc);
    }
  else
    new[0] = '\0';
  return (new);
}
