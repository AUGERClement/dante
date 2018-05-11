/*
** my_swap.c for emacs in /home/delphine.godet/PSU_2016_my_printf/srcs/nbr_hold
** 
** Made by delphine godet
** Login   <delphine.godet@epitech.net>
** 
** Started on  Sat Nov 19 01:07:28 2016 delphine godet
** Last update Wed Jan 25 14:17:25 2017 delphine godet
*/

int	my_swap(int *a, int *b)
{
  int	d;

  d = *a;
  *a = *b;
  *b = d;
  return (0);
}
