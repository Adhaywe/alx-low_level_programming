#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: char
 * @src: char
 * @n: integer input
 * Return: pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int i = 0;
	int j = 0;

	for (i = 0; *dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; *src[j] != '\0' && j < n; j++)
	{
		*dest[i + j] = *src[j];
	}
	return (dest);
}
