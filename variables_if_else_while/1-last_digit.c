#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - 1-last_digit.c
 * Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
	printf("%d Last digit of 98 is 8 and is greater than 5\n", n);
	}
	else if (n == 0)
	{
	printf("%d and is 0\n", n);
	}
	else
	{
	printf("%d and is less than 6 and not 0\n", n);
		}
	return (0);
}
