#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for ( ch = 'a' ; ch <= 'z' ; ch++)
	{
		while (( ch != 'e') && ( ch != 'q'))
		{
			putchar(ch);
		}
	}
	return (0);
}
