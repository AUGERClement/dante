/*
** my_memset.c for corewar in /home/yami/CPE_2016_corewar/lib/my/srcs
** 
** Made by yami
** Login   <yami>
** 
** Started on  Fri Mar 24 23:11:55 2017 yami
** Last update Fri Mar 24 23:38:30 2017 yami
*/

#include <stdlib.h>

char            *my_memset(char *s, char c, size_t size)
{
  size_t        i;

  i = 0;
  while (i < size)
    {
      s[i] = c;
      i++;
    }
  s[i] = '\0';
  return (s);
}
