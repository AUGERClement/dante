/*
** EPITECH PROJECT, 2017
** 12
** File description:
** my_find_prime_sup
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
	if (my_is_prime(nb) == 1)
		return (nb);
	else {
		while (my_is_prime(nb) != 1)
			nb += 1;
	}
	return (nb);
}
