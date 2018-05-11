/*
** main.c for dante in /home/yami/dante/generator
**
** Made by yami
** Login   <yami>
**
** Started on  Tue Apr 25 19:41:31 2017 yami
** Last update Tue Apr 25 19:41:33 2017 yami
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "generator.h"
#include "my.h"

int		main(int ac, char **av)
{
  t_args	*args;
  char		**maze;

  if ((args = manage_args(ac, av)) == NULL)
    {
      printf("Try -h or --help for more informations.\n");
      return (84);
    }
  maze = init_maze(args->width, args->height);
  maze = generate_maze(maze, args);
  print_maze(maze);
  if (args->save > 0)
    save_maze(maze, args->filename);
  free_tab(maze);
  free(args);
  return (0);
}
