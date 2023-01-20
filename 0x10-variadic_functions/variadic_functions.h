#ifndef _VARIADIC_FUNCTION_H_
#define _VARIADIC_FUNCTION_H_

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);

#endif
