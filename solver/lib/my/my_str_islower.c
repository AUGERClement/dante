/*
** EPITECH PROJECT, 2017
** 24
** File description:
** my_str_islower.c
*/

#include "my.h"

int my_str_islower(char const *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
