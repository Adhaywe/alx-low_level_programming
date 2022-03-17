#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * _isupper - A function that checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise
 */
int main(void)
{
	int _isupper(int c);
}
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
