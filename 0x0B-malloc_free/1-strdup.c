#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - return the length of a string
 * @s: char type
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * _strdup - returns a pointer to a new string
 * @str: char type
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	int size;
	int a;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));
	a = 0;
	while (a < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[a] = str[a];
		a++;
	}
	return (ptr);
}
