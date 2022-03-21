#include "main.h"

/**
 * void swap_int(int *a, int *b) - function that swaps the values of two integers
 * @a: first value
 * @b: second value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

