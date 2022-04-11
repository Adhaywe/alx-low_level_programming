#include <stdio.h>

/**
 * main - program that prints the name of the file it was compiled from,
 * followed by a new line
 *
 * Return - name of the file
 */
int main()
{
	printf("%s\n",_FILE_);
	return (0);
}
