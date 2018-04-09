/*
** EPITECH PROJECT, 2017
** my_str_is_printable.c
** File description:
** my_str_isprintable v2
*/

#include "my.h"

int my_str_is_printable(char const *str)
{
	int compteur = 0;

	while (str[compteur] != '\0') {
		if (str[compteur] <= ' ' || str[compteur] >= 127) {
			my_putchar('\\');
			my_putstr("00");
			my_put_nbr(str[compteur]);
			compteur++;
		} else {
			my_putchar(str[compteur]);
			compteur++;
		}
	}
	return (0);
}
