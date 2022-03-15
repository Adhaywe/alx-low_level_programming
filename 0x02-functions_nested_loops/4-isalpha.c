#include <stdio.h>
#include "main.h"

/**
 * isalpha - function that checks for alphabetic character
 * @c: single character input
 * Return: 1 if c is letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a'&& c <= 'z') && (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
