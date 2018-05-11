/*
** my_strsep.c for emacs in /home/delphine.godet/bsminishell1
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Mon Jan  2 13:35:04 2017 delphine godet
** Last update Fri Feb 24 12:10:38 2017 delphine godet
*/

#include <stdio.h>
#include "my.h"

int	get_delim(const char c, const char *delim)
{
  int	i;

  i = 0;
  while (delim[i] != '\0')
    {
      if (c == delim[i])
	return (0);
      i++;
    }
  return (-1);
}

int	pos_delim(char *stringp, const char *delim)
{
  int	i;

  i = 0;
  while (stringp[i] != '\0')
    {
      if (get_delim(stringp[i], delim) != -1)
	return (i);
      i++;
    }
  return (-1);
}

char	*my_strsep(char **stringp, const char *delim)
{
  char	*token;
  int	nb;

  if (*stringp == NULL)
    return (NULL);
  nb = pos_delim(*(stringp), delim);
  if (nb == -1)
    nb = my_strlen(*(stringp));
  token = *stringp;
  (*stringp) += nb;
  if (**stringp != '\0')
    (*stringp)++;
  else
    *stringp = NULL;
  token[nb] = '\0';
  return (token);
}
