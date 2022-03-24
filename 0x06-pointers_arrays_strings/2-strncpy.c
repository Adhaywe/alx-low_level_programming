#include "main.h"

/**
 * _strncpy - Function that copies a n byte of src to dest
 * @dest: string to copy to
 * @src: string to be copied
 * @n: number of bytes to be copied
 */
char *_strncpy(char *dest, char *src, int c)
{
	int i = 0;

	for (i = 0; *(src + i) && i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
