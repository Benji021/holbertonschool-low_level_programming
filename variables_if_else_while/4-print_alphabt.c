#include <stdio.h>
/**
 * main - 4-print_alphabt.c
 * Return: Always 0
*/
int main(void)
{
char n;
	for (n = 'a'; n <= 'z'; n++)
	{
	if (n != 'q' && n != 'e')
	{
		putchar(n);
	}
	}
	putchar('\n');

	return (0);
}
