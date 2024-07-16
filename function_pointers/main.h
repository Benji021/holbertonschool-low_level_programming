#include <stddef.h>
#ifndef MAIN
#define MAIN
int _putchar(char c);
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
int main(void);
void print_name(char *name, void (*f)(char *));
void print_elem(int elem);
void print_elem_hex(int elem);
int main(void);
void array_iterator(int *array, size_t size, void (*action)(int));
int is_98(int elem);
int is_strictly_positive(int elem);
int abs_is_98(int elem);
int main(void);
int int_index(int *array, int size, int (*cmp)(int));
#endif
