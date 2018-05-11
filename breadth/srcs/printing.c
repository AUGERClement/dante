/*
** printing.c for dante in /home/yami/dante/largeur/srcs/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 23:17:44 2017 Delphine Godet
** Last update Wed May 17 18:50:37 2017 Delphine Godet
*/

#include <stdio.h>
#include <stdlib.h>

#include "breadth.h"
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
	  if (info.cells[i][j] == 0)
	    write(1, "o", 1);
	  else if (info.cells[i][j] == -1)
	    write(1, "X", 1);
	  else
	    write(1, "*", 1);
	  j++;
	}
      write(1, "\n", 1);
      i++;
    }
}

t_info	*lol(int *i, int *j, t_info *info)
{
  if (*i > 0 && info->cells[(*i) - 1][*j] == info->cells[*i][*j] - 1)
    {
      info->cells[*i][*j] = 0;
      *i = (*i) - 1;
    }
  else if (*i < info->height - 1 &&
	   info->cells[(*i) + 1][*j] == info->cells[*i][*j] - 1)
    {
      info->cells[*i][*j] = 0;
      *i = (*i) + 1;
    }
  else if (*j > 0 && info->cells[*i][(*j) - 1] == info->cells[*i][*j] - 1)
    {
      info->cells[*i][*j] = 0;
      *j = (*j) - 1;
    }
  else if (*j < info->width - 1 &&
	   info->cells[*i][(*j) + 1] == info->cells[*i][*j] - 1)
    {
      info->cells[*i][*j] = 0;
      *j = (*j) + 1;
    }
  else
    free_cells(info);
  return (info);
}

void	rewrite_map(t_info *info)
{
  int	i;
  int	j;

  i = info->height - 1;
  j = info->width - 1;
  while (i > 0 || j > 0)
    {
      info = lol(&i, &j, info);
      if (!info->cells)
	return ;
    }
  info->cells[0][0] = 0;
}
