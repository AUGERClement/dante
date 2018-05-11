/*
** save_maze.c for dante in /home/yami/dante/generator/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 00:24:39 2017 Delphine Godet
** Last update Thu May 11 06:01:35 2017 Delphine Godet
*/

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

#include "my.h"

void		save_maze(char **maze, char *filename)
{
  int		fd;
  size_t	i;

  fd = open(filename, O_CREAT | O_RDWR, S_IRUSR |
	    S_IWUSR | S_IRGRP | S_IROTH);
  if (fd < 0)
    {
      free(maze);
      printf("Error : Save of the generated maze failed.\n");
      exit(84);
    }
  i = 0;
  while (maze[i] != NULL)
    {
      write(fd, maze[i], my_strlen(maze[i]));
      if (maze[i + 1] != NULL)
	write(fd, "\n", 1);
      i++;
    }
  close(fd);
}
