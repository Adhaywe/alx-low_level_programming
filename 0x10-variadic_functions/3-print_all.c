#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a char
 * @c: arg pointing to the character to be printed
 *
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_int - prints an int
 * @i: arg pointing to the integer to be printed
 *
 */
void print_int(va_list i)
{
	printf("%i", va_arg(i, int));
}
/**
 * print_float - prints a float
 * @f: arg pointing to the float to be printed
 *
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_string - prints a string
 * @s: arg pointing to the string to be pointed
 *
 */
void print_string(va_list s)
{
	char *str = va_arg(s, char *);
	if (str)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}
/**
 * print_all - entry arguments
 * @format: format which denotes the type of data type
 *
 */
void print_all(const char * const format, ...)
{
	format_t type[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL. NULL}
	};
	va_list arg;
	int i, j;
	char *separator = "";

	va _start(arg, format);
	i = 0;
	while(format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (type[j].t[0] == format[i])
			{
				printf("%s", separator);
				type[j].f(arg);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
