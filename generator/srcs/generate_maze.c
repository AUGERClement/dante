/*
** generate_maze.c for dante in /home/yami/dante/generator/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Wed May 10 22:22:17 2017 Delphine Godet
** Last update Thu May 11 05:29:15 2017 Delphine Godet
*/

#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "generator.h"
#include "my.h"

char		**init_maze(int x, int y)
{
  char		**maze;
  size_t	i;

  maze = xmalloc(sizeof(char *), y + 1);
  i = 0;
  while (i < (size_t)y)
    {
      maze[i] = xmalloc(sizeof(char), x + 1);
      maze[i] = memset(maze[i], 'X', x);
      maze[i][x] = '\0';
      i++;
    }
  maze[i] = NULL;
  return (maze);
}

char		**select_bias_fcts(char **maze, t_cell *cells, t_args *args)
{
  size_t	i;

  i = 0;
  while (bias_tab[i].orient != NUL)
    {
      if (bias_tab[i].orient == args->orient)
	{
	  cells = bias_tab[i].link(cells, args->width, args->height);
	  maze = bias_tab[i].gen(maze, cells);
	  if (args->perfect == -1)
	    maze = bias_tab[i].imperf(maze, cells);
	}
      i++;
    }
  free(cells);
  return (maze);
}

char		**generate_maze(char **maze, t_args *args)
{
  t_cell	*cells;

  maze[0][0] = '*';
  maze[args->height - 1][args->width - 1] = '*';
  cells = stock_cells_pos(args->width, args->height);
  maze = select_bias_fcts(maze, cells, args);
  return (maze);
}
