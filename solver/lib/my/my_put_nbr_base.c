/*
** EPITECH PROJECT, 2017
** my_put_nbr_base.c
** File description:
** my_put_nbr_base.c
*/

#include "my.h"

int my_put_nbr_base(int nb, char *base)
{
	int result = 0;
	int rest = 0;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	result = nb / my_strlen(base);
	rest = nb % my_strlen(base);
	if (result > 0)
		my_put_nbr_base(result, base);
	my_putchar(base[rest]);
	return (0);
}
