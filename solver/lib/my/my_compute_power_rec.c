/*
** EPITECH PROJECT, 2017
** 01
** File description:
** return the fst argument raised to the power p
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
	if (p == 0)
		return (1);
	else if (p < 0)
		return (0);
	return (nb * my_compute_power_rec(nb, p - 1));
}