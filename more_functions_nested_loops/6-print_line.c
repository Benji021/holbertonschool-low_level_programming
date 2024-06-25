#include "main.h"
#include <stdio.h>
/**
 * print_line - draws a straight line in the terminal
 * @n: character
 * Return: void
*/
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
		_putchar('\n');
}
