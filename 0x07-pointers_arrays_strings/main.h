#ifndef MAIN_H

char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
void print_chessboard(char (*a)[8]);
int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void set_string(char **s, char *to);
void print_diagsums(int *a, int size);
#define MAIN_H
#endif
