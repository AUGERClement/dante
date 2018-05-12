/*
** EPITECH PROJECT, 2017
** 26
** File description:
** my_str_isprintable.c
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= ' ' && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}
