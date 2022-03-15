#include <stdio.h>

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 1;
	int ch;

	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
		i++;
	}
}
