/*
** EPITECH PROJECT, 2017
** Task06
** File description:
** return 1 if the number is prime and 0 if not
*/

#include "my.h"

int my_is_prime(int nb)
{
	int x = 2;
	int count = 0;

	if (nb < 2)
		return (0);
	while (nb >= (x * x)) {
		count  = nb / x;
		if (count * x == nb)
			return (0);
		x++;
	}
	return (1);
}
