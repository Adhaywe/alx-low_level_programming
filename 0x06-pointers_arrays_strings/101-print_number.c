#include "main.h"
#include <limits.h>

/**
* print_number - function that prints an int
* @n: a pointer to a string given by main
* 
* Return: void
*/

void print_number(int n)
{
	int result = n;
	int x;
	int places = 1000000000;

	if (n < 0)
	{
		result = -n;
		_putchar('-');
	}
	if (n == INT_MAX || n == INT_MIN)
	{
		while (1)
		{
			if (n == INT_MAX)
			{
				_putchar('2');
				_putchar('1');
				_putchar('4');
				_putchar('7');
				_putchar('4');
				_putchar('8');
				_putchar('3');
				_putchar('6');
				_putchar('4');
				_putchar('7');
				break;
			}
			else if (n == INT_MIN)
			{
				_putchar('2');
				_putchar('1');
				_putchar('4');
				_putchar('7');
				_putchar('4');
				_putchar('8');
				_putchar('3');
				_putchar('6');
				_putchar('4');
				_putchar('8');
				break;
			}
		}
	}
	else if (n == 0)
		_putchar('0');
	else
	{
		while (places > result)
			places /= 10;
		while (places > 0)
		{
			x = result / places;
			_putchar((x % 10) + '0');
			places /= 10;
		}
	}
}
