#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that computes eh absolute value of an integer
 * @n: integer input
 * Return: always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n = n * -1);
	}
	else
		return (n);
}
