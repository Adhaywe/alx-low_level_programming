#include <stdio.h>
#include "main.h"

/**
 * print_times_table - function that prints the n times table
 *
 * Return: Time table
 */
void print_times_table(int n)
{
	int row, col, m;

	if (n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (col = 1; col <= n; col++)
			{
				m = row * col;
				if ((m / 10) > 0)
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
	else
	{
		_putchar(' ');
	}
}
