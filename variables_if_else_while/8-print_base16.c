#include <stdio.h>
/**
 * main - 8 -print_base16.c
 * Return: Always 0
*/
int main(void)
{
	char n;
	char a;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
