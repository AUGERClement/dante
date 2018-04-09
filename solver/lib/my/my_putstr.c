/*
** EPITECH PROJECT, 2017
** task02
** File description:
** displays, one-by-one, the characters of a string
*/

#include "my.h"

int my_putstr(char const *str)
{
	int count = 0;

	while (str[count] != '\0') {
		my_putchar(str[count]);
		count++;
	}
	return (*str);
}
