/*
** arguments_manager.c for dante in /home/yami/dante/generator/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 03:36:39 2017 Delphine Godet
** Last update Sat May 13 18:37:35 2017 Delphine Godet
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "generator.h"
#include "my.h"

int		is_it_help(char **av)
{
  size_t	i;

  i = 0;
  while (av[i] != NULL)
    {
      if (strcmp(av[i], "-h") == 0 || strcmp(av[i], "--help") == 0)
	{
	  usage(av[0]);
	  return (1);
	}
      i++;
    }
  return (0);
}

t_args	*get_maze_size(t_args *args, char **av)
{
  if (my_str_isnum(av[1]) == 0 || my_str_isnum(av[2]) == 0)
    {
      printf("Error: First and second arguments must be numbers.\n");
      free(args);
      return (NULL);
    }
  args->width = atoi(av[1]);
  args->height = atoi(av[2]);
  if (args->width <= 0 || args->height <= 0)
    {
      printf("Error: Maze size can only be strictly positive.\n");
      free(args);
      return (NULL);
    }
  return (args);
}

int	check_nb_args(t_args *args, int ac)
{
  int	res;

  res = 3;
  if (args->save > 0)
    res += 2;
  if (args->bias > 0)
    res += 2;
  if (args->perfect > 0)
    res += 1;
  if (ac != res)
    return (-1);
  return (0);
}

t_args	*is_there_perfect(t_args *args, char **av, int ac)
{
  int	i;

  i = 1;
  args->perfect = -1;
  while (av[i] != NULL)
    {
      if (strcmp(av[i], "perfect") == 0 && i != args->bias + 1 &&
	  i != args->save + 1)
	{
	  if (args->perfect > 0)
	    {
	      printf("Error: multiple perfect mentionned.\n");
	      free(args);
	      return (NULL);
	    }
	  args->perfect = i;
	}
      i++;
    }
  if (check_nb_args(args, ac) != 0)
    return (NULL);
  return (args);
}

t_args		*manage_args(int ac, char **av)
{
  t_args	*args;

  if (is_it_help(av) != 0)
    exit(0);
  if (ac < 3)
    {
      printf("Error: Missing mandatory arguments.\n");
      return (NULL);
    }
  if (ac > 8)
    {
      printf("Error: Can't have so many arguments.\n");
      return (NULL);
    }
  args = xmalloc(sizeof(*args), 1);
  if ((args = get_maze_size(args, av)) == NULL)
    return (NULL);
  if ((args = search_save(args, av)) == NULL)
    return (NULL);
  if ((args = search_bias(args, av)) == NULL)
    return (NULL);
  if ((args = is_there_perfect(args, av, ac)) == NULL)
    return (NULL);
  return (args);
}
