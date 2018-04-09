/*
** EPITECH PROJECT, 2017
** 19
** File description:
** my_strupcase.c
*/

#include "my.h"

char *my_strupcase(char *str)
{
	int count = 0;

	while (str[count] != '\0') {
		if (str[count] >= 'a' && str[count] <= 'z')
			str[count] -= ' ';
		count++;
	}
	return (str);
}
