/*
** my_itoa.c for lib in /home/yami/CPE_2016_corewar/lib/my/srcs/nbr_hold/
**
** Made by Delphine Godet
** Login   <delphine.godet@epitech.eu>
**
** Started on  Sat Apr  1 03:41:13 2017 Delphine Godet
** Last update Sun Apr  2 00:07:37 2017 Delphine Godet
*/

#include "my.h"

char	*full_nb_to_str(int i, int nb, int divi)
{
  char	*s;

  s = xmalloc(1, i + 2);
  i = 0;
  if (nb < 0)
    {
      s[0] = '-';
      i = 1;
      nb *= -1;
    }
  while (divi > 0)
    {
      s[i] = nb / divi + '0';
      i++;
      nb %= divi;
      divi /= 10;
    }
  s[i] = '\0';
  return (s);
}

char		*my_itoa(int nb)
{
  char		*s;
  int		tmp;
  int		divi;
  int		i;

  i = 0;
  tmp = nb;
  if (nb < 0)
    {
      i += 1;
      tmp *= -1;
    }
  divi = 1;
  while (tmp / divi > 1)
    {
      i++;
      divi *= 10;
    }
  s = full_nb_to_str(i, nb, divi);
  return (s);
}
