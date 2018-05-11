/*
** binary_tree_algo.c for dante in /home/yami/dante/generator/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 03:01:03 2017 Delphine Godet
** Last update Thu May 11 06:12:38 2017 Delphine Godet
*/

#include <stdlib.h>
#include <time.h>
#include <stddef.h>

#include "generator.h"

char		**generate_and_link_cells_se(char **maze, t_cell *cells)
{
  size_t	i;

  i = 0;
  while (cells[i].x != -1)
    {
      maze[cells[i].y][cells[i].x] = '*';
      if (cells[i].link == 0)
	maze[cells[i].y + 1][cells[i].x] = '*';
      else if (cells[i].link == 1)
	maze[cells[i].y][cells[i].x + 1] = '*';
      i++;
    }
  i -= 1;
  if (maze[cells[i].y + 1] != NULL &&
      maze[cells[i].y][cells[i].x + 1] != '\0')
    {
      srand(time(NULL));
      if (rand() % 2 == 0)
	maze[cells[i].y + 1][cells[i].x] = '*';
      else
	maze[cells[i].y][cells[i].x + 1] = '*';
    }
  return (maze);
}

char		**generate_and_link_cells_sw(char **maze, t_cell *cells)
{
  size_t	i;

  i = 0;
  while (cells[i].x != -1)
    {
      maze[cells[i].y][cells[i].x] = '*';
      if (cells[i].link == 0)
	maze[cells[i].y + 1][cells[i].x] = '*';
      else if (cells[i].link == 1)
	maze[cells[i].y][cells[i].x - 1] = '*';
      i++;
    }
  i -= 1;
  if (maze[cells[i].y + 1] != NULL &&
      maze[cells[i].y][cells[i].x + 1] != '\0')
    {
      srand(time(NULL));
      if (rand() % 2 == 0)
	maze[cells[i].y + 1][cells[i].x] = '*';
      else
	maze[cells[i].y][cells[i].x + 1] = '*';
    }
  return (maze);
}

char		**generate_and_link_cells_ne(char **maze, t_cell *cells)
{
  size_t	i;

  i = 0;
  while (cells[i].x != -1)
    {
      maze[cells[i].y][cells[i].x] = '*';
      if (cells[i].link == 0)
	maze[cells[i].y - 1][cells[i].x] = '*';
      else if (cells[i].link == 1)
	maze[cells[i].y][cells[i].x + 1] = '*';
      i++;
    }
  i -= 1;
  if (maze[cells[i].y + 1] != NULL &&
      maze[cells[i].y][cells[i].x + 1] != '\0')
    {
      srand(time(NULL));
      if (rand() % 2 == 0)
	maze[cells[i].y + 1][cells[i].x] = '*';
      else
	maze[cells[i].y][cells[i].x + 1] = '*';
    }
  return (maze);
}

char		**generate_and_link_cells_nw(char **maze, t_cell *cells)
{
  size_t	i;

  i = 0;
  while (cells[i].x != -1)
    {
      maze[cells[i].y][cells[i].x] = '*';
      if (cells[i].link == 0)
	maze[cells[i].y - 1][cells[i].x] = '*';
      else if (cells[i].link == 1)
	maze[cells[i].y][cells[i].x - 1] = '*';
      i++;
    }
  i -= 1;
  if (maze[cells[i].y + 1] != NULL &&
      maze[cells[i].y][cells[i].x + 1] != '\0')
    {
      srand(time(NULL));
      if (rand() % 2 == 0)
	maze[cells[i].y + 1][cells[i].x] = '*';
      else
	maze[cells[i].y][cells[i].x + 1] = '*';
    }
  return (maze);
}
