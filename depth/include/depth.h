/*
** solver.h for dante in /home/yami/dante/depth/include/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 05:50:42 2017 Delphine Godet
** Last update Thu May 11 23:20:25 2017 Delphine Godet
*/

#ifndef DEPTH_H
# define DEPTH_H

typedef struct	s_path
{
  int		x;
  int		y;
  struct s_path	*next;
}		t_path;

void	print_maze(char **maze);
char	**load_maze(char *filename);
char	depth_first_search(char **maze, int x, int y);
char	**erase_wrong_paths(char **maze);

#endif
