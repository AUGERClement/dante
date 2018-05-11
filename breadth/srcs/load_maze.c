/*
** load_maze.c for dante in /home/yami/dante/depth/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 01:25:16 2017 Delphine Godet
** Last update Wed May 17 18:43:51 2017 Delphine Godet
*/

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

#include "breadth.h"
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

int		*load_values(char *line, int width)
{
  int		*cell;
  size_t	i;

  cell = xmalloc(sizeof(int), width);
  i = 0;
  while (line[i] != '\n' && line[i] != '\0')
    {
      if (line[i] == 'X')
	cell[i] = -1;
      else
	cell[i] = 0;
      i++;
    }
  return (cell);
}

t_info		load_maze(char *filename)
{
  int		fd;
  char		*line;
  t_info	info;
  int		i;

  if ((fd = open(filename, O_RDONLY)) < 0 ||
      (info.width = get_width(fd)) == -1)
    {
      info.cells = NULL;
      return (info);
    }
  info.height = get_height(fd, info.width);
  line = xmalloc(1, info.width + 2);
  info.cells = xmalloc(sizeof(int *), info.height + 1);
  i = -1;
  while (++i < info.height)
    {
      read(fd, line, info.width + 1);
      line[info.width] = '\0';
      info.cells[i] = load_values(line, info.width);
    }
  info.cells[i] = NULL;
  free(line);
  close(fd);
  return (info);
}
