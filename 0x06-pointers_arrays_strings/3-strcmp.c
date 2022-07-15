/*
 * File: 3-strcmp.c
 * Auth: ikeji chiagozie @ alx-school
 */

#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of the first unmatched
 *         If str1 == str2, 0.
 *         If str1 > str2, the positive difference of the first unmatched
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
