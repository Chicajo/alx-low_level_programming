#include "main.h"

/**
 * print_chessboard - Print a chessboard
 * @a: Given array of pointers
 * (char (*a)[8])
 *
 * Return: void.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}
