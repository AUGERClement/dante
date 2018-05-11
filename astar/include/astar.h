/*
** astar.h for dante in /home/yami/dante/astar2/include/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Sun May 14 21:58:43 2017 Delphine Godet
** Last update Mon May 22 19:34:01 2017 yami
*/

#ifndef ASTAR_H
# define ASTAR_H

typedef	struct	s_info
{
  float		**cells;
  int		width;
  int		height;
}		t_info;

void		print_maze(t_info info);
t_info		load_maze(char *filename);
float		calc_dist(int x1, int x2, int width, int height);
char		astar(t_info *info, int x, int y, int value);
void		free_cells(t_info *info);

#endif
