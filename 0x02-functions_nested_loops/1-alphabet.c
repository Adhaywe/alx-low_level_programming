#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
/* A function that prints all the alphabets in lowercase*/
void print_alphabet(void) 
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
