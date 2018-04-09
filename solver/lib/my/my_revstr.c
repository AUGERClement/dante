/*
** EPITECH PROJECT, 2017
** Task03
** File description:
** reverse a string
*/

#include "my.h"
#include <stdlib.h>

char *my_revstr(char *str)
{
	int j = my_strlen(str);
	char copy[j];
	int c = 0;

	for (int count = 0; str[count] != '\0'; count++)
		copy[count] = str[count];
	for (j; j > 0; j--) {
		str[c] = copy[j - 1];
		c++;
	}
	return (str);
}
