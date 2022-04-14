#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - function that prints numbers
 * @separator - char type input
 * @n: int type
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator && i < n-1)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
