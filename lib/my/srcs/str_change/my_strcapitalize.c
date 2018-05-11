/*
** my_strcapitalize.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/str_change
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:16:46 2016 delphine godet
** Last update Tue Jan 31 18:35:27 2017 delphine godet
*/

#include <stdlib.h>

int	my_isalphanum(char *str, size_t i)
{
  if (str[i] >= 'A' && str[i] <= 'Z')
    return (1);
  else if (str[i] >= 'a' && str[i] <= 'z')
    return (2);
  else if (str[i] >= '0' && str[i] <= '9')
    return (3);
  else
    return (0);
}

char		*my_strcapitalize(char *str)
{
  size_t	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (my_isalphanum(str, i) == 1)
	{
	  if (my_isalphanum(str, (i - 1)) != 0)
	    str[i] = str[i] + 32;
	}
      else if (my_isalphanum(str, i) == 2)
	{
	  if (my_isalphanum(str, (i - 1)) == 0)
	    str[i] = str[i] - 32;
	}
      i++;
    }
  return (str);
}
