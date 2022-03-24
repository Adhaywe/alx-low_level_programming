#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string number one
 * @s2: string number two
 * Return: the difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
