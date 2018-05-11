/*
** printing.c for dante in /home/yami/dante/generator/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 04:38:16 2017 Delphine Godet
** Last update Sun May 14 19:30:35 2017 Delphine Godet
*/

#include <stdio.h>

#include "my.h"

void		print_maze(char **maze)
{
  size_t	i;

  i = 0;
  while (maze[i] != NULL)
    {
      if (maze[i + 1] == NULL)
	printf("%s", maze[i]);
      else
	printf("%s\n", maze[i]);
      i++;
    }
}

void	usage(char *name)
{
  printf("Usage:\n\t%s x y [perfect] -s [FILE] -b [bias] -h\n\n", name);
  printf("\t\tx:\twidth of the maze.\n");
  printf("\t\ty:\theight of the maze.\n");
  printf("\t[perfect]:\toptional argument to generate a perfect maze.\n");
  printf("\t\t\tBy default, the generation will be an imperfect maze.\n");
  printf("-s --save [FILE]:\toptional argument to save the generated maze.\n");
  printf("\t\t\tThe name of the target file must be specified.\n");
  printf("-b --bias [BIAS]:\toptional argument to indicate the bias of the\n");
  printf("\t\t\talgorithm. Can be [NE/NW/SE/SW].\n");
  printf("\t\t\tBy default, the bias is NW.\n");
  printf("\t-h --help:\tprint this help.\n");
}
