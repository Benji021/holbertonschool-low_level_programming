#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_prime_number -  is a prime number
 * @n : int number
 * Return:  1 if the input integer is a prime number, otherwise return 0
*/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	if (n < 4)
		return (1);

	return (prime_number(n, 2));
}
