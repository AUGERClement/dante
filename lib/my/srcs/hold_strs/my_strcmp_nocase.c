/*
** my_strcmp.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/hold_strs
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:08:05 2016 delphine godet
** Last update Tue Jan 31 18:41:17 2017 delphine godet
*/

#include <stdlib.h>

int		my_strcmp_nocase(char *s1, char *s2)
{
  size_t	i;

  i = 0;
  while (s1[i] == s2[i] ||
	 s1[i] + 32 == s2[i] ||
	 s1[i] == s2[i] + 32 ||
	 s1[i] - 32 == s2[i] ||
	 s1[i] == s2[i] - 32)
    {
      if (s1[i] == '\0')
	return (0);
      i++;
    }
  if (s1[i] >= 'A' && s1[i] <= 'Z' &&
      s2[i] >= 'a' && s2[i] <= 'z')
    return ((s1[i] + 32) - s2[i]);
  else if (s2[i] >= 'A' && s2[i] <= 'Z' &&
	   s1[i] >= 'a' && s1[i] <= 'z')
    return (s1[i] - (s2[i] + 32));
  else
    return (s1[i] - s2[i]);
}
