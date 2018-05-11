/*
** printing.c for dante in /home/yami/dante/largeur/srcs/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 23:17:44 2017 Delphine Godet
** Last update Mon May 22 16:50:31 2017 Delphine Godet
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

#include "astar.h"
#include "my.h"

void	free_cells(t_info *info)
{
  int	i;

  i = 0;
  while (i < info->height)
    free(info->cells[i++]);
  free(info->cells);
}

void	print_maze(t_info info)
{
  int	i;
  int	j;

  i = 0;
  while (i < info.height)
    {
      j = 0;
      while (j < info.width)
	{
	  if (i == 0 && j == 0)
	    write(1, "o", 1);
	  else if (fabs(info.cells[i][j]) <= FLT_EPSILON)
	    write(1, "o", 1);
	  else if (info.cells[i][j] == INFINITY)
	    write(1, "X", 1);
	  else
	    write(1, "*", 1);
	  j++;
	}
      write(1, "\n", 1);
      i++;
    }
}
