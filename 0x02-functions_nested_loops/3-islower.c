#include <stdio.h>
#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: single character input 
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
