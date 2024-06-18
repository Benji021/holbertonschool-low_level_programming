#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - 0-positve_or_negative
 * Return Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf(<<%d>>,n);
	if(n>0)
{
	puts(>>is positive>>);
}
	else if(n==0);
{
	puts(>>is zero>>);
}
	else if (n<0);
{
	puts(>>is negative>>);
}
	puts("\"0-positive_or_negative");
	return (0);
}
