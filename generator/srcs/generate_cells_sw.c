/*
** generate_cells.c for dante in /home/yami/dante/generator/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Wed May 10 22:22:42 2017 Delphine Godet
** Last update Thu May 11 06:05:11 2017 Delphine Godet
*/

#include <stdlib.h>
#include <time.h>

#include "generator.h"

static t_cell	corner_cell(t_cell cell, int y)
{
  if (cell.x == 1 && cell.y == y - 2)
    {
      srand(time(NULL));
      if (rand() % 2 == 0)
	cell.link = 0;
      else
	cell.link = 1;
    }
  else if (cell.x == 0 && cell.y == y - 2)
    cell.link = 0;
  else if (cell.x == 1 && cell.y == y - 1)
    cell.link = 1;
  else
    cell.link = 2;
  return (cell);
}

t_cell		*link_cells_sw(t_cell *cells, int x, int y)
{
  size_t	i;

  (void)x;
  i = 0;
  srand(time(NULL));
  while (cells[i].x != -1)
    {
      if ((cells[i].x == 0 || cells[i].x == 1) &&
	  (cells[i].y == y - 1 || cells[i].y == y - 2))
	cells[i] = corner_cell(cells[i], y);
      else if ((cells[i].x == 0 || cells[i].x == 1) &&
	  cells[i].y != y - 1 && cells[i].y != y - 2)
	cells[i].link = 0;
      else if ((cells[i].y == y - 1 || cells[i].y == y - 2) &&
	       cells[i].x != 0 && cells[i].x != 1)
	cells[i].link = 1;
      else
	cells[i].link = (rand() % 2 == 0 ? 0 : 1);
      i++;
    }
  return (cells);
}
