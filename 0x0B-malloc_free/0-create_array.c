#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an arary of characters
 * @size: unsigned int type
 * @c: char type
 *
 * Return: return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
	{
		return (0);
	}
	s = malloc(size * (sizeof(char)));
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
