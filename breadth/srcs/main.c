/*
** main.c for dante in /home/yami/dante/breadth/srcs
**
** Made by yami
** Login   <yami>
**
** Started on  Thu May 11 08:17:58 2017 yami
** Last update Thu May 11 08:18:07 2017 yami
*/

#include <stdio.h>
#include <stdlib.h>

#include "breadth.h"
#include "my.h"

int		main(int ac, char **av)
{
  t_info	info;

  if (ac != 2)
    return (84);
  info = load_maze(av[1]);
  if (info.cells == NULL)
    return (84);
  info.cells[0][0] = 1;
  info = breadth_first_search(info);
  rewrite_map(&info);
  if (!info.cells)
    printf("no solution found\n");
  else
    {
      print_maze(info);
      free_cells(&info);
    }
  return (0);
}
