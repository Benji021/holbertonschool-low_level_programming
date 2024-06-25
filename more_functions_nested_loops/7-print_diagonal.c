#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: void
*/
void print_diagonal(int n)
{

	while (n-- <= 0)
	{
		_putchar(n);
	}
		_putchar('\n');
}
