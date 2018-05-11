/*
** breadth_first_search.c for dante in /home/yami/dante/largeur/srcs/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 23:17:49 2017 Delphine Godet
** Last update Mon May 22 19:36:44 2017 yami
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

#include "astar.h"
#include "my.h"

char	get_index(float values[])
{
  int	i;
  int	res;
  float	dist;

  i = 0;
  res = -1;
  dist = INFINITY;
  while (i < 4)
    {
      if (values[i] > FLT_EPSILON && values[i] < dist)
	{
	  dist = values[i];
	  res = i;
	}
      i++;
    }
  return (res);
}

char	find_shortest(t_info *info, int x, int y)
{
  float	values[4];

  values[0] = values[1] = values[2] = values[3] = -1.0f;
  if (x + 1 < info->width && info->cells[y][x + 1] != INFINITY &&
      info->cells[y][x + 1] > FLT_EPSILON)
    values[0] = info->cells[y][x + 1];
  if (x > 0 && info->cells[y][x - 1] != INFINITY &&
      info->cells[y][x - 1] > FLT_EPSILON)
    values[1] = info->cells[y][x - 1];
  if (y + 1 < info->height && info->cells[y + 1][x] != INFINITY &&
      info->cells[y + 1][x] > FLT_EPSILON)
    values[2] = info->cells[y + 1][x];
  if (y > 0 && info->cells[y - 1][x] != INFINITY &&
      info->cells[y - 1][x] > FLT_EPSILON)
    values[3] = info->cells[y - 1][x];
  return (get_index(values));
}

char	end_fct2(t_info *info, int x, int y, int value)
{
  int	pos;

  pos = find_shortest(info, x, y);
  if (pos == 1)
    {
      info->cells[y][x - 1] = 0.0f;
      if (astar(info, x - 1, y, value + 1) <= 0)
	return (0);
    }
  pos = find_shortest(info, x, y);
  if (pos == 2)
    {
      info->cells[y + 1][x] = 0.0f;
      if (astar(info, x, y + 1, value + 1) <= 0)
	return (0);
    }
  pos = find_shortest(info, x, y);
  if (pos == 3)
    {
      info->cells[y - 1][x] = 0.0f;
      if (astar(info, x, y - 1, value + 1) <= 0)
	return (0);
    }
  info->cells[y][x] = -1.0f;
  return (1);
}

char	end_fct(t_info *info, int x, int y, int value)
{
  int	pos;

  pos = find_shortest(info, x, y);
  if (pos == 2)
    {
      info->cells[y + 1][x] = 0.0f;
      if (astar(info, x, y + 1, value + 1) <= 0)
	return (0);
    }
  pos = find_shortest(info, x, y);
  if (pos == 3)
    {
      info->cells[y - 1][x] = 0.0f;
      if (astar(info, x, y - 1, value + 1) <= 0)
	return (0);
    }
  pos = find_shortest(info, x, y);
  if (pos == 0)
    {
      info->cells[y][x + 1] = 0.0f;
      if (astar(info, x + 1, y, value + 1) <= 0)
	return (0);
    }
  return (end_fct2(info, x, y, value));
}

char	astar(t_info *info, int x, int y, int value)
{
  int	pos;

  if (value > 20000)
    return (-1);
  if (x == info->width - 1 && y == info->height - 1)
    return (0);
  pos = find_shortest(info, x, y);
  if (pos == 0)
    {
      info->cells[y][x + 1] = 0.0f;
      if (astar(info, x + 1, y, value + 1) <= 0)
	return (0);
    }
  pos = find_shortest(info, x, y);
  if (pos == 1)
    {
      info->cells[y][x - 1] = 0.0f;
      if (astar(info, x - 1, y, value + 1) <= 0)
	return (0);
    }
  return (end_fct(info, x, y, value));
}
