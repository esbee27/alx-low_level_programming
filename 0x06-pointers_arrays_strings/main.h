#ifndef MAIN_H
#define MAIN_H
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
#include <string.h>
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *leet(char *);
char *rot13(char *);
void reverse_array(int *a, int n);
char *string_toupper(char *);
#endif
