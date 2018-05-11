/*
** epur_str.c for emacs in /home/delphine.godet/PSU_2016_minishell1/src
**
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
**
** Started on  Fri Jan 13 23:24:49 2017 delphine godet
** Last update Thu Apr  6 21:42:19 2017 Delphine Godet
*/

#include <stdlib.h>
#include "my.h"

int		is_there_token(char *s, char c)
{
  size_t	i;

  i = 0;
  while (s[i] != '\0')
    {
      if (s[i] == c)
	return ((int)i);
      i++;
    }
  return (-1);
}

int	check_spaces_tab(char *str, int i)
{
  if ((str[i] != ' ' && str[i] != '\t') ||
      (str[i] == ' ' && str[i + 1] != ' ' &&
      str[i + 1] != '\t' && str[i + 1] != '\0'))
    return (1);
  else if (str[i] == '\t' && str[i + 1] != ' ' &&
	   str[i + 1] != '\t' && str[i + 1] != '\0')
    return (2);
  else
    return (0);
}

char	*epur_str(char *str)
{
  int	i;
  int	j;
  char	*tmp;

  i = j = 0;
  tmp = my_strdup(str);
  while (str[i] == ' ' || str[i] == '\t')
    i++;
  while (str[i] != '\0')
    {
      if (check_spaces_tab(str, i) == 1)
	tmp[j++] = str[i++];
      else if (check_spaces_tab(str, i) == 2)
	{
	  tmp[j++] = ' ';
	  i++;
	}
      else
	i++;
    }
  tmp[j] = '\0';
  free(str);
  str = tmp;
  return (str);
}
