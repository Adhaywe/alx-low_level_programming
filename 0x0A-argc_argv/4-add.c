#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc - number of command line arguments
 * @argv - array of those arguments
 * Return: 0 if successful, Error and 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 0)
	{
		_putchar(0);
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if ((argv[i] >= 'a') && (argv[i] <= 'z'))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
