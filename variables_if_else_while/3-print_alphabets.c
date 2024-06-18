#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
char n;
n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
n = 'A';
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
