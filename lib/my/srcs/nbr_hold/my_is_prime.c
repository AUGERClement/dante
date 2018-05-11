/*
** my_is_prime.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/not_done
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:09:55 2016 delphine godet
** Last update Sun Dec 11 17:39:20 2016 delphine godet
*/

int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  while (i < nb)
    {
      if (nb % i == 0)
	return (0);
      i++;
    }
  return (1);
}
