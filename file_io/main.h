#ifndef MAIN
#define MAIN
#include <stddef.h>

int main(int ac, char **av);
ssize_t read_textfile(const char *filename, size_t letters);
int main(int ac, char **av);
int create_file(const char *filename, char *text_content);
int main(int ac, char **av);
int append_text_to_file(const char *filename, char *text_content);
#endif
