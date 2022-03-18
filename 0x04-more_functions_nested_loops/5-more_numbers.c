#include "main.h"

/**
 * more_numbers - a function that prints ten times the numbers from 0 to 14
 *
 * Return: prints the numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i, j ,x, y;
:
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			x = j / 10;
			y = j % 10;
			if (x != 0)
				_putchar(x + '0');
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
