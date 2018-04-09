/*
** EPITECH PROJECT, 2017
** 02
** File description:
** return the square root of a number
*/

#include "my.h"

int my_compute_square_root(int nb)
{
	int x = 0;
	int sqr_root = x * x;

	if (nb <= 0)
		return (0);
	while (nb != sqr_root) {
		x++;
		sqr_root = x * x;
		if (x > nb) {
			return (0);
		}
	}
	return (x);
}
