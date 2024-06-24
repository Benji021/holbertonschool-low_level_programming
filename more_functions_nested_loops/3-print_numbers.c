#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print 0123456789
 *@n: character to print
 *Return: void
*/
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
		_putchar('\n');
}
