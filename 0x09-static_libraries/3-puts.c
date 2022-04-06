#include "main.h"

/**
 * _puts - function that prints a string
 * @str: string output
 * Return: prints a string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
