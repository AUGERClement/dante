/*
** EPITECH PROJECT, 2017
** 20
** File description:
** my_strlowcase.c
*/

#include "my.h"

char *my_strlowcase(char *str)
{
	int count = 0;

	while (str[count] != '\0') {
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] += ' ';
		count++;
	}
	return (str);
}
