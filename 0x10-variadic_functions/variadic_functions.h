<<<<<<< HEAD
#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
=======
#ifndef _VARIADIC_H_
#define _VARIADIC_H_

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
>>>>>>> 728baa4b5d1afd0dadae60e6279ad26c844d59df

#endif
