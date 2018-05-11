/*
** main.c for dante in /home/yami/dante/depth/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 01:24:42 2017 Delphine Godet
** Last update Sun May 14 15:47:37 2017 Delphine Godet
*/

#include <stdio.h>

#include "depth.h"
#include "my.h"

int		main(int ac, char **av)
{
  char		**maze;

  if (ac != 2)
    return (84);
  if ((maze = load_maze(av[1])) == NULL)
    return (84);
  maze[0][0] = 'o';
  if (depth_first_search(maze, 0, 0) == 1)
    printf("no solution found\n");
  else
    print_maze(maze);
  free_tab(maze);
  return (0);
}
