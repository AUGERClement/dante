/*
** depth_first_search.c for dante in /home/yami/dante/depth/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 02:11:24 2017 Delphine Godet
** Last update Sun May 14 15:48:19 2017 Delphine Godet
*/

#include <stdlib.h>

#include "depth.h"
#include "my.h"

int	end_fct(char **maze, int x, int y)
{
  if (y > 0 && maze[y - 1][x] == '*')
    {
      maze[y - 1][x] = 'o';
      if (depth_first_search(maze, x, y - 1) == 0)
	return (0);
    }
  maze[y][x] = '-';
  return (1);
}

char	depth_first_search(char **maze, int x, int y)
{
  if (maze[y + 1] == NULL && maze[y][x + 1] == '\0')
    return (0);
  if (maze[y][x + 1] == '*')
    {
      maze[y][x + 1] = 'o';
      if (depth_first_search(maze, x + 1, y) == 0)
	return (0);
    }
  if (maze[y + 1] != NULL && maze[y + 1][x] == '*')
    {
      maze[y + 1][x] = 'o';
      if (depth_first_search(maze, x, y + 1) == 0)
	return (0);
    }
  if (x > 0 && maze[y][x - 1] == '*')
    {
      maze[y][x - 1] = 'o';
      if (depth_first_search(maze, x - 1, y) == 0)
	return (0);
    }
  return (end_fct(maze, x, y));
}
