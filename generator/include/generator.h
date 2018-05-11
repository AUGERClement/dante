/*
** generator.h for dante in /home/yami/dante/generator/include/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 05:21:58 2017 Delphine Godet
** Last update Thu May 11 05:22:48 2017 Delphine Godet
*/

#ifndef GEN_H
# define GEN_H

typedef enum	enum_bias
{
  NE,
  NW,
  SE,
  SW,
  NUL
}		e_bias;

typedef struct	s_args
{
  int		width;
  int		height;
  int		perfect;
  int		save;
  char		*filename;
  int		bias;
  e_bias	orient;
}		t_args;

typedef struct	s_cell
{
  int		x;
  int		y;
  int		link;
}		t_cell;

typedef struct	s_fctptr_bias
{
  e_bias	orient;
  t_cell	*(*link)(t_cell *, int, int);
  char		**(*gen)(char **, t_cell *);
  char		**(*imperf)(char **maze, t_cell *);
}		t_fctptr_bias;

extern t_fctptr_bias	bias_tab[];

t_cell	*link_cells_se(t_cell *cells, int x, int y);
t_cell	*link_cells_sw(t_cell *cells, int x, int y);
t_cell	*link_cells_ne(t_cell *cells, int x, int y);
t_cell	*link_cells_nw(t_cell *cells, int x, int y);
char	**generate_and_link_cells_se(char **maze, t_cell *cells);
char	**generate_and_link_cells_sw(char **maze, t_cell *cells);
char	**generate_and_link_cells_ne(char **maze, t_cell *cells);
char	**generate_and_link_cells_nw(char **maze, t_cell *cells);
char	**imperfect_maze_ne(char **maze, t_cell *cells);
char	**imperfect_maze_nw(char **maze, t_cell *cells);
char	**imperfect_maze_se(char **maze, t_cell *cells);
char	**imperfect_maze_sw(char **maze, t_cell *cells);
char	**init_maze(int x, int y);
t_cell	*stock_cells_pos(int x, int y);
char	**generate_maze(char **maze, t_args *args);
t_args	*manage_args(int ac, char **av);
t_args	*search_save(t_args *args, char **av);
t_args	*search_bias(t_args *args, char **av);
void	usage(char *name);
void	print_maze(char **maze);
void	save_maze(char **maze, char *filename);

#endif
