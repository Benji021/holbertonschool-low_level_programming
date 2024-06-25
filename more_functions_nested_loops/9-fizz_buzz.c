#include <stdio.h>
#include "main.h"
/**
 * fizz_buzz - the numbers from 1 to 100
 * Return: 0
*/
int main(void)
{
	int n;
	for (n = 0; n <= 100; n++)
	{
		if (n %3)
			printf("Fizz");
		else if (n %5)
			printf("Buzz");
		else if (n %3 && n %5)
			printf("FizzBuzz");
		else
			printf("%d", n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
