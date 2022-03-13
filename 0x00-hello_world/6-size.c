#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)", size(char));
	printf("Size of an int: %d byte(s)", size(int));
	printf("Size of a lont int: %d byte(s)", size(long int));
	printf("Size of a long long int: %d byte(s)", size(long long int));
	printf("Size of a float: %d byte(s)", size(float));
	return (0);
}
