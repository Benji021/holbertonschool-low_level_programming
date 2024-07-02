#include "main.h"
#include <stdio;h>
#include <string.h>
/**
 * _puts_recursion - that prints a string, followed by a new line.
 * @s : tring to print
 * Return : void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	return;
	}
		_putchar(*s);
		s++;
		_puts_recursion(s);
}
