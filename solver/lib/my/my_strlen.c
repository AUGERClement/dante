/*
** EPITECH PROJECT, 2017
** Task03
** File description:
** count and return characters in the string
*/

#include "my.h"

int my_strlen(char const *str)
{
	int count = 0;

	while (str[count] != '\0') {
		count++;
	}
	return (count);
}
