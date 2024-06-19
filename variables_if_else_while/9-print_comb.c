#include <stdio>
/**
 * main - 9 -print_comb.c
 * Return: Always 0
*/
in main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0)
}
