/*
** imperfect_mazes.c for dante in /home/yami/dante/generator/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 05:01:21 2017 Delphine Godet
** Last update Sun May 14 16:17:58 2017 Delphine Godet
*/

#include <stdlib.h>
#include <time.h>

#include "generator.h"

char		**imperfect_maze_ne(char **maze, t_cell *cells)
{
  size_t	i;

  i = 0;
  srand(time(NULL));
  while (cells[i].x != -1)
    {
      if (rand() % 3 == 0)
	{
	  if (cells[i].link == 0 && maze[cells[i].y][cells[i].x + 1] != '\0')
	    maze[cells[i].y][cells[i].x + 1] = '*';
	  if (cells[i].link == 1 && cells[i].y > 0)
	    maze[cells[i].y - 1][cells[i].x] = '*';
	}
      i++;
    }
  return (maze);
}

char		**imperfect_maze_nw(char **maze, t_cell *cells)
{
  size_t	i;

  i = 0;
  srand(time(NULL));
  while (cells[i].x != -1)
    {
      if (rand() % 3 == 0)
	{
	  if (cells[i].link == 0 && cells[i].x > 0)
	    maze[cells[i].y][cells[i].x - 1] = '*';
	  if (cells[i].link == 1 && cells[i].y > 0)
	    maze[cells[i].y - 1][cells[i].x] = '*';
	}
      i++;
    }
  return (maze);
}

char		**imperfect_maze_se(char **maze, t_cell *cells)
{
  size_t	i;

  i = 0;
  srand(time(NULL));
  while (cells[i].x != -1)
    {
      if (rand() % 3 == 0)
	{
	  if (cells[i].link == 0 && maze[cells[i].y][cells[i].x + 1] != '\0')
	    maze[cells[i].y][cells[i].x + 1] = '*';
	  if (cells[i].link == 1 && maze[cells[i].y + 1] != NULL)
	    maze[cells[i].y + 1][cells[i].x] = '*';
	}
      i++;
    }
  return (maze);
}

char		**imperfect_maze_sw(char **maze, t_cell *cells)
{
  size_t	i;

  i = 0;
  srand(time(NULL));
  while (cells[i].x != -1)
    {
      if (rand() % 3 == 0)
	{
	  if (cells[i].link == 0 && cells[i].x > 0)
	    maze[cells[i].y][cells[i].x - 1] = '*';
	  if (cells[i].link == 1 && maze[cells[i].y + 1] != NULL)
	    maze[cells[i].y + 1][cells[i].x] = '*';
	}
      i++;
    }
  return (maze);
}
