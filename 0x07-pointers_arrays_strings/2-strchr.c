#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to be checked
 * @c: charcter to be searched
 *
 * Return: pointer with the character of NULL if the char is not present
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	if (*(s + i) == c)
	{
		return (s + i);
		i++;
	}
	return (0);
}
