#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @str: string
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;
	char a[500];
	i = 0;
	j = 0;

	while (*(s + i))
	{
		*(a + i) = *(s + i);
		i++
	}
	i = i - 1;
	while (i > = 0)
	{
		*(s + i) = *(a + j);
		j++;
		i--;
	}
}
