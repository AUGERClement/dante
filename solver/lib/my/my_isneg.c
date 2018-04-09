/*
** EPITECH PROJECT, 2017
** Task04
** File description:
** display N if parameter is neg, and P else
*/

#include "my.h"

int my_isneg(int n)
{
	if (n >= 0)
		my_putchar('P');
	else
		my_putchar('N');
	return (n);
}
