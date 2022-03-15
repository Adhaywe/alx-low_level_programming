#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
void print_alphabet(void) /*a function that prints alphabets*/
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
