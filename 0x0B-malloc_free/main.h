#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/*#include <string.h>*/
#include <unistd.h>

char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int **alloc_grid(int width, int height);

#endif
