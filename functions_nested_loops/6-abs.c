#include "main.h"
#include <stdlib.h>
/**
 * _abs - absolute
 * @n: The number to be comp
 * Return: the absolute value of number or 0
*/
int _abs(int n)
{
	if (n < 0)
	{
		int _abs_val;

		_abs_val = n * -1;

		return (_abs_val);
	}

	return (n);
}
