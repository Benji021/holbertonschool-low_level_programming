#include<stdio.h>
/**
 * main - 6-print_numberz.c
 * Return: Always 0
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
