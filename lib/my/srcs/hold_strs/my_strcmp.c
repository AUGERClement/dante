/*
** my_strcmp.c for lib in /home/yami/CPE_2016_corewar/lib/my/srcs/hold_strs
** 
** Made by yami
** Login   <yami>
** 
** Started on  Sat Apr  1 21:19:28 2017 yami
** Last update Sat Apr  1 21:19:46 2017 yami
*/

#include <stdlib.h>

int		my_strcmp(char *s1, char *s2)
{
  size_t	i;

  if (s1 == NULL || s2 == NULL)
    return (-1);
  i = 0;
  while (s1[i] == s2[i])
    {
      if (s1[i] == '\0')
	return (0);
      i++;
    }
  return (s1[i] - s2[i]);
}
