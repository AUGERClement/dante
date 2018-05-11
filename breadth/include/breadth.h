/*
** breadth.h for dante in /home/yami/dante/breadth/include
**
** Made by yami
** Login   <yami>
**
** Started on  Thu May 11 06:50:54 2017 yami
** Last update Thu May 11 06:51:11 2017 yami
*/

#ifndef BREAD_H
# define BREAD_H

typedef struct		s_queue
{
  int			x;
  int			y;
  struct s_queue	*next;
}			t_queue;

typedef	struct	s_info
{
  int		**cells;
  int		width;
  int		height;
}		t_info;

void		free_cells(t_info *info);
void		rewrite_map(t_info *info);
t_info		breadth_first_search(t_info info);
t_info		load_maze(char *filename);
void		print_maze(t_info info);

#endif
