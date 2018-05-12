/*
** EPITECH PROJECT, 2017
** 21
** File description:
** my_strcapitalize.c
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
	int capitale = 1;
	int count = 0;

	for (count = 0; str[count] != '\0'; count++)
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] += ' ';
	for (count = 0; str[count] != '\0'; count++) {
		if (!(str[count] >= 'a' && str[count] <= 'z' ||
			str[count] >= '0' && str[count] <= '9'))
			capitale = 0;
		if (str[count] >= 'a' && str[count] <= 'z') {
			if (capitale == 0) {
				str[count] -= ' ';
				capitale = 1;
			}
		}
	}
	return (str);
}
