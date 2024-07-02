#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_chessboard - that prints the chessboard
 * @a: the board to print
 * Return : void
*/
void print_chessboard(char (*a)[8])
{
	int l, c;

	for (l = 0; l < 8; l++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[l][c]);
		}
		_putchar('\n');
	}
}
