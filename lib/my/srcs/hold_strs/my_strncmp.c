/*
** my_strncmp.c for emacs in /home/delphine.godet/secure_place/srcs/hold_strs
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Tue Jan 17 00:11:23 2017 delphine godet
** Last update Tue Jan 31 18:40:21 2017 delphine godet
*/

#include <stdlib.h>

int		my_strncmp(char *s1, char *s2, size_t n)
{
  size_t	i;

  i = 0;
  while (s1[i] == s2[i])
    {
      if (i == n - 1 || s1[i] == '\0')
	return (0);
      i++;
    }
  return (s1[i] - s2[i]);
}
