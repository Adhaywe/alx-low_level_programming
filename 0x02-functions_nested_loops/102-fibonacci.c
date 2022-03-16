#include <stdio.h>
#include "main.h"
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int count = 2;
	int i = 1, j = 2;
	int k;

	printf("%d, ", i);
	while(count <= 50)
	{
		if(count == 50)
		{
			printf("%d, ", j);
		}
		else
		{
			printf("%d, ", j);
		}

		k = j;
		j += i;
		i = k;
		count++;
	}
	return (0);
}

