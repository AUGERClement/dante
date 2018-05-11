/*
** my_power_rec.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/nbr_hold
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:07:09 2016 delphine godet
** Last update Sat Nov 19 01:07:17 2016 delphine godet
*/

int	my_power_rec(int nb, int p)
{
  int	result;

  if (p == 0)
    return (1);
  else if (p < 0)
    return (0);
  else if (p == 1)
    return (nb);
  else if (p == 2)
    return (nb * nb);
  else
    {
      result = my_power_rec(nb, (p - 1)) * nb;
      return (result);
    }
}
