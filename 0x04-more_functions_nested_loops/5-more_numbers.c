#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers from 0 to 14
 *
 * Return: prints the numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i = 0;
	int n;

	while(i <= 9)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n + '0');
		}
		i++;
	}
	_putchar('\n');
	return 0;
}
