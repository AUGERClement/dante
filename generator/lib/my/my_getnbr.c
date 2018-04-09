/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** my_getnbr.c
*/

#include <unistd.h>
#include <stdlib.h>

int my_getnbr(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (str[i] != '\0') {
		if (str[i] >= '0' && str[i] <= '9')
			result = (result * 10) + (*str - '0');
		else if (str[i] == '-' && str[i+1] >= '0' && str[i+1] <= '9')
			sign++;
		str++;
	}
	if (sign == 2)
		result = -1 * result;
	else
		result = result * sign;
	return (result);
}
