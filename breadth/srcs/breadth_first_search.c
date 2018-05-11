/*
** breadth_first_search.c for dante in /home/yami/dante/largeur/srcs/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 23:17:49 2017 Delphine Godet
** Last update Wed May 17 18:37:27 2017 Delphine Godet
*/

#include <stdio.h>
#include <stdlib.h>

#include "breadth.h"
#include "my.h"

t_queue		*add_to_queue(t_queue *queue, int x, int y)
{
  t_queue	*new;
  t_queue	*end;

  new = xmalloc(sizeof(*queue), 1);
  new->x = x;
  new->y = y;
  new->next = NULL;
  end = queue;
  while (end->next != NULL)
    end = end->next;
  end->next = new;
  return (queue);
}

t_queue		*del_from_queue(t_queue *queue)
{
  t_queue	*tmp;

  tmp = queue;
  queue = queue->next;
  free(tmp);
  return (queue);
}

t_queue	*mark_bread(t_queue *queue, t_info *info)
{
  if (queue->x + 1 < info->width && info->cells[queue->y][queue->x + 1] == 0)
    {
      info->cells[queue->y][queue->x + 1] =
	  info->cells[queue->y][queue->x] + 1;
      add_to_queue(queue, queue->x + 1, queue->y);
    }
  if (queue->x > 0 && info->cells[queue->y][queue->x - 1] == 0)
    {
      info->cells[queue->y][queue->x - 1] =
	  info->cells[queue->y][queue->x] + 1;
      add_to_queue(queue, queue->x - 1, queue->y);
    }
  if (info->cells[queue->y + 1] != NULL &&
      info->cells[queue->y + 1][queue->x] == 0)
    {
      info->cells[queue->y + 1][queue->x] =
	  info->cells[queue->y][queue->x] + 1;
      add_to_queue(queue, queue->x, queue->y + 1);
    }
  return (queue);
}

t_info		breadth_first_search(t_info info)
{
  t_queue	*queue;

  queue = xmalloc(sizeof(*queue), 1);
  queue->x = 0;
  queue->y = 0;
  queue->next = NULL;
  while (queue != NULL)
    {
      queue = mark_bread(queue, &info);
      if (queue->y > 0 && info.cells[queue->y - 1][queue->x] == 0)
          {
            info.cells[queue->y - 1][queue->x] =
                info.cells[queue->y][queue->x] + 1;
            add_to_queue(queue, queue->x, queue->y - 1);
          }
      queue = del_from_queue(queue);
    }
  return (info);
}
