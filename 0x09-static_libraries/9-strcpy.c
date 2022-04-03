#include "main.h"

/**
 * _strcpy - copies string from src to dest
 *
 * @dest: pointer to destination of string
 * @src: pointer to source of string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
