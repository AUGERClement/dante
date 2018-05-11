/*
** my_getnbr.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/nbr_hold
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:06:39 2016 delphine godet
** Last update Sun Apr  2 17:26:26 2017 yami
*/

#include <stdlib.h>

int		where_nb_beg(char *s)
{
  int		i;

  i = 0;
  while ((s[i] < '0' && s[i] != '-' && s[i] != '+') ||
	 (s[i] > '9' && s[i] != '-' && s[i] != '+'))
    {
      if (s[i] == '\0')
	return (-1);
      i++;
    }
    return (i);
}

int		my_getnbr(char *s)
{
  int		i;
  size_t	j;
  int		res;

  j = res = 0;
  if ((i = where_nb_beg(s)) == -1)
    return (0);
  while (s[i] == '-' || s[i] == '+')
    {
      if (s[i] == '-')
	j++;
      i++;
    }
  if (s[i] < '0' || s[i] > '9')
    return (0);
  while (s[i] >= '0' && s[i] <= '9')
    {
      res = res * 10 + (s[i] - '0');
      i++;
    }
  if (j % 2 != 0)
    res = -res;
  return (res);
}
