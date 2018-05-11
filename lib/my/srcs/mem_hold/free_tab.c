/*
** free_tab.c for lib in /home/yami/PSU_2016_minishell2/lib/my/srcs/mem_hold/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Thu Apr  6 20:46:22 2017 Delphine Godet
** Last update Thu Apr  6 20:47:14 2017 Delphine Godet
*/

#include <stdlib.h>

void		free_tab(char **tab)
{
  size_t	i;

  i = 0;
  while (tab[i] != NULL)
    free(tab[i++]);
  free(tab);
}
