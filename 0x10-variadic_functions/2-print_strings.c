#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings to be printed
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *str;
	
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
			printf("(nil)");
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
