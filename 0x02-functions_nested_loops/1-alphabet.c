include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int ch;
	
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}