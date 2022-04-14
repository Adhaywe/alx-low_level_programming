#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: int
 *
 * Return: sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int i;
	sum = 0;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	return sum;
}
