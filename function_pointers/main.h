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
#endif
