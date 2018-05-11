/*
** error_manager.c for dante in /home/yami/dante/generator/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu May 11 00:00:53 2017 Delphine Godet
** Last update Thu May 11 05:28:43 2017 Delphine Godet
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "generator.h"

t_args	*search_filename(t_args *args, char **av)
{
  if (av[args->save + 1] == NULL)
    {
      free(args);
      printf("Error: save option requires an argument for filename.\n");
      return (NULL);
    }
  if (av[args->save + 1][0] == '-')
    {
      free(args);
      if (strcmp(av[args->save + 1], "-b") == 0 ||
	  strcmp(av[args->save + 1], "--bias") == 0)
	printf("Error: save option requires an argument for filename.\n");
      else
	printf("Error: invalid flag.\n");
      return (NULL);
    }
  args->filename = av[args->save + 1];
  return (args);
}

t_args		*search_save(t_args *args, char **av)
{
  size_t	i;

  args->save = -1;
  i = 1;
  while (av[i] != NULL)
    {
      if (strcmp(av[i], "-s") == 0 || strcmp(av[i], "--save") == 0)
	{
	  if (args->save > 0)
	    {
	      printf("Error: multiple similar flags.\n");
	      free(args);
	      return (NULL);
	    }
	  args->save = i;
	}
      i++;
    }
  if (args->save == -1)
    return (args);
  if ((args = search_filename(args, av)) == NULL)
    return (NULL);
  return (args);
}

t_args	*define_orient(t_args *args, char **av)
{
  if (strcmp(av[args->bias + 1], "NW") == 0)
    args->orient = NW;
  else if (strcmp(av[args->bias + 1], "NE") == 0)
    args->orient = NE;
  else if (strcmp(av[args->bias + 1], "SW") == 0)
    args->orient = SW;
  else if (strcmp(av[args->bias + 1], "SE") == 0)
    args->orient = SE;
  else
    {
      printf("Error: invalid bias argument.\n");
      free(args);
      return (NULL);
    }
  return (args);
}

t_args	*search_orient(t_args *args, char **av)
{
  if (av[args->bias + 1] == NULL ||
      strcmp(av[args->bias + 1], "-s") == 0 ||
      strcmp(av[args->bias + 1], "--save") == 0)
    {
      free(args);
      printf("Error: bias option requires an argument.\n");
      return (NULL);
    }
  if (av[args->bias + 1][0] == '-')
    {
      free(args);
      printf("Error: invalid flag.\n");
      return (NULL);
    }
  if ((args = define_orient(args, av)) == NULL)
    return (NULL);
  return (args);
}

t_args		*search_bias(t_args *args, char **av)
{
  size_t	i;

  args->bias = -1;
  args->orient = NW;
  i = 1;
  while (av[i] != NULL)
    {
      if (strcmp(av[i], "-b") == 0 || strcmp(av[i], "--bias") == 0)
	{
	  if (args->bias > 0)
	    {
	      printf("Error: multiple similar flags.\n");
	      free(args);
	      return (NULL);
	    }
	  args->bias = i;
	}
      i++;
    }
  if (args->bias == -1)
    return (args);
  if ((args = search_orient(args, av)) == NULL)
    return (NULL);
  return (args);
}
