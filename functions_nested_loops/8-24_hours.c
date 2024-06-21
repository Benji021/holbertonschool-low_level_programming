#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - print minute of days in Jack Bauer
 * Return: 0
*/
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23, h++)
	{
		_putchar((h / 10) + '0');
		-putchar(':');
	}
	for (m = 0; m <= 59, m++)
	{
		_putchar((m / 10) + '0');
	}
		-putchar('\n');
	return (0);
}
