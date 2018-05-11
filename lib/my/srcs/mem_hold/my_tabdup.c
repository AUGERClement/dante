/*
** my_tabdup.c for lib in /home/yami/CPE_2016_corewar/lib/my/srcs/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Sat Apr  1 03:42:43 2017 Delphine Godet
** Last update Sat Apr  1 03:42:51 2017 Delphine Godet
*/

#include "my.h"

char            **my_tabdup(char **tab)
{
  char          **new;
  size_t        i;

  i = 0;
  while (tab[i++] != NULL);
  new = xmalloc(sizeof(char *), i + 1);
  i = 0;
  while (tab[i] != NULL)
    {
      new[i] = my_strdup(tab[i]);
      i++;
    }
  new[i] = NULL;
  return (new);
}
