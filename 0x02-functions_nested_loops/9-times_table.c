#include <stdio.h>
#include "main.h"

/**
 * times_table - function that prints the 9 times table
 *
 * Return: time table
 */
void times_table(void)
{
	int row, col, n;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col <= 9; col++ )
		{
			n = (row * col);
			if ((n / 10) > 0)
			{
				_putchar((n / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((n % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
