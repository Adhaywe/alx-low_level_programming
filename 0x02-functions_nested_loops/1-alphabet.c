#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 **/
void print_alphabet(void) 
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
