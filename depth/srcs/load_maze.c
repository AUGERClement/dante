/*
** load_maze.c for dante in /home/yami/dante/depth/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 01:25:16 2017 Delphine Godet
** Last update Wed May 17 16:49:37 2017 Delphine Godet
*/

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

#include "my.h"

ssize_t		get_width(int fd)
{
  char		*line;
  size_t	wid;

  if ((line = get_next_line(fd)) == NULL)
    return (-1);
  wid = my_strlen(line);
  free(line);
  return (wid);
}

size_t		get_height(int fd, int wid)
{
  char		line[wid + 1];
  size_t	hei;

  hei = 1;
  while (read(fd, line, wid + 1) > 0)
    hei++;
  lseek(fd, 0, SEEK_SET);
  return (hei);
}

char		**load_maze(char *filename)
{
  int		fd;
  char		**maze;
  size_t	i;
  ssize_t	wid;
  size_t	hei;

  if ((fd = open(filename, O_RDONLY)) < 0)
    return (NULL);
  if ((wid = get_width(fd)) == -1)
    return (NULL);
  hei = get_height(fd, wid);
  maze = xmalloc(sizeof(char *), hei + 1);
  i = 0;
  while (i < hei)
    {
      maze[i] = xmalloc(sizeof(char), wid + 1);
      read(fd, maze[i], wid + 1);
      maze[i][wid] = '\0';
      i++;
    }
  maze[i] = NULL;
  close(fd);
  return (maze);
}
