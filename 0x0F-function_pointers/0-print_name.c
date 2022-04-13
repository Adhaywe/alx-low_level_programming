#include "function_pointers.h"

/**
 * print_name - function that prints name
 *
 * @name: char string
 * @f: function pointer that takes a string argument
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
