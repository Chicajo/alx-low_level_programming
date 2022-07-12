/*
 * File: 4-print_rev.c
 * Auth: ikeji chiagozie @ alx-school
 */

#include "main.h"

/**
 * print_rev - this function prints a reverse string
 *
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}

