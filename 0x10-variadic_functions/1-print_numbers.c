#include "variadic_functions.h"

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
	int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			;
		}
		else
		{
			printf("%d", va_arg(arg, int));
			printf("%c", separator);
		}
	}
	_putchar('\n');
}
