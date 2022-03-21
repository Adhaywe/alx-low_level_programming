#include <stdio.h>

/**
 * reset_to_98 - a function that updates the int value of a parameter to 98
 * @n: integer input
 * @p: integer pointer
 * Return: nothing
 */
void reset_to_98(int *n)
{
	int n;
	int *p;

	p = &n;
	*p = 98;
}
