#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: character input
 * Return: length of string
 */
int _strlen(char *s)
{
	int cnt;

	cnt = 0;
	while(*(s + cnt) != '\0')
		cnt++;
	return (cnt);
}
