#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string number one
 * @s2: string number two
 * Return: the difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	while (*s1 == *s2 && *s1 != '\0')
	{
		*s1++;
		*s2++;
	}
	if (*s1 != *s2)
	{
		result = *s1 - *s2;
	}
	return (result);
}
