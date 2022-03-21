#include "main.h"

/**
 * puts2 - Function that prints every other character of a string
 * @str: string 
 * Return: void
 */
void puts2(char *str)
{
	int counter = 0;

	while (*str)
	{
		if (counter % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
