#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - that prints a string in reverse
 * @s : tring to print
 * Return : void
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
