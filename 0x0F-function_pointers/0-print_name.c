#include "function_pointers.h"

/**
 * print_name - function that prints name
 *
 * @name: "name" to copy
 * @f: pointer to function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	(*f)(name);
}
