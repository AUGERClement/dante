/*
** EPITECH PROJECT, 2017
** 18
** File description:
** my_strncmp.c
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s2[j] != '\0') {
		i++;
		j++;
	}
	if (s1[i] == s2[j])
		return (0);
	else if (s1[i] < s2[j])
		return (-1);
	else
		return (1);
}
