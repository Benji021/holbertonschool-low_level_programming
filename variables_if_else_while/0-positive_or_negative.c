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
	if(n>0)
	printf("%d is positive",n);
{
	printf("is positive",n);
}
	else if(n==0);
{
	printf("is zero",n);
}
	else (n<0);
{
	printf("is negative",n);
}
	return (0);
}
