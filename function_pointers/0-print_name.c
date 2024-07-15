#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
/**
 * print_name - that prints a name
 * @name : pointer name
 * @f : pointer fonction
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	printf("Bob %s\n", name);
	printf("Bob Dylan %s\n", name);
}
