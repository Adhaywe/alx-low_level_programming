#include "main.h"

/**
 * _strncpy - Function that copies a n byte of src to dest
 * @dest: string to copy to
 * @src: string to be copied
 * @n: number of bytes to be copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
