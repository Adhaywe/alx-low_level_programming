#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary to decimal
 * @b: pointer a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if b is NULL or the chars in the 
 * string are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	size_t num = 0, mult = 1;
	int len;

	if (b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num += (b[len] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
