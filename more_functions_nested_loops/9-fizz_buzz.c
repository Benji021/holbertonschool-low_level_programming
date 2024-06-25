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
		{
			printf("Fizz");
			printf(" ");
		}
		else if (n %5)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (n %3 && n %5)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf(n);
			printf(" ");
		}
	}
	printf('\n');
	return (0);
}
