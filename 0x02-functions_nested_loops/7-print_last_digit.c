#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: a number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = (n % 10);

	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
