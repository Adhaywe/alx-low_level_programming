#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_string(va_list);

/**
 * struct format_t - struct type defining a format_t
 * @t: symbol representing a data type
 * @f: a function pointer to a function that prints a data type corresponding to 
 * symbol
 */
typedef struct format_t
{
	char *t;
	void (*f)(va_list);
} format_t;

#endif
