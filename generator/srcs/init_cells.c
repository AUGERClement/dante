/*
** init_cells.c for dante in /home/yami/dante/generator/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 02:59:53 2017 Delphine Godet
** Last update Thu May 11 05:29:41 2017 Delphine Godet
*/

#include "generator.h"
#include "my.h"

size_t		find_nb_cells(int x, int y)
{
  size_t	nb;
  size_t	wid;
  size_t 	hei;

  wid = x / 2;
  if (x % 2 != 0)
    wid += 1;
  hei = y / 2;
  if (y % 2 != 0)
    hei += 1;
  nb = wid * hei;
  return (nb);
}

t_cell		*stock_cells_pos(int x, int y)
{
  t_cell	*cell;
  size_t	i;
  size_t	j;
  size_t	k;

  cell = xmalloc(sizeof(*cell), find_nb_cells(x, y) + 1);
  i = k = 0;
  while (i < (size_t)y)
    {
      j = 0;
      while (j < (size_t)x && i % 2 == 0)
	{
	  if (j % 2 == 0)
	    {
	      cell[k].x = j;
	      cell[k].y = i;
	      k++;
	    }
	  j++;
	}
      i++;
    }
  cell[k].x = -1;
  cell[k].y = -1;
  return (cell);
}
