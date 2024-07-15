#ifndef MAIN
#define MAIN
int _putchar(char c);
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
int main(void);
void print_name(char *name, void (*f)(char *));
#endif
