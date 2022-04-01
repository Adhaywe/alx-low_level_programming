#include "main.h"
#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc - number of command line arguments
 * @argv - array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
