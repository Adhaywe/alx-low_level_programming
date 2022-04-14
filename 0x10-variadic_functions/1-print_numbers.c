#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - function that prints numbers
 * @separator: char type input
 * @n: int type
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(arg, n);

		while (i < n)
		{
			printf("%d", va_arg(arg, int));

			if (i != n - 1  && separator != NULL)
				printf("%s", separator);

			i++;
		}
		va_end(args);
	}
	printf("\n");
}
