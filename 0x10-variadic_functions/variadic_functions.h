#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list c);
void print_i(va_list i);
void print_f(va_list f);
void print_s(va_list s);
/**
 * struct prints - struct for 3
 * @type: character to check
 * @f: function to point to
 */
typedef struct prints
{
	char *type;
	void (*f)(va_list a);
} prints;
#endif
