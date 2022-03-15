#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
void print_alphabet_x10()
{
	int i = 1;
	int ch;

	while(i <= 10)
	{
		for(ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
		i++;
		return (0);
	}
}
