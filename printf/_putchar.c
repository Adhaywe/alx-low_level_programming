#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the char input
 *
 * Return: On success 1, otherwise -1 on error
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
