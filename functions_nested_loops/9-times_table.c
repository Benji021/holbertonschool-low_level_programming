#include "main.h"
#include <stdio.h>
/**
 * times_table -  Prints the 9 times table, starting with 0
 * Return void
*/
void times_table(void)
{
	int a, b, c;

		for (a = 0; a <= 9; a++)
		{
			for (b = 0; b <= 9; b++)
			{
				c = a * b;

				if (c >= 0)
				{
					_putchar(c + 48);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
}
