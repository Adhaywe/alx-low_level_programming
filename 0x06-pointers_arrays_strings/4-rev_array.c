#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: number of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;
	
	n = n -1;
	while (i < n)
	{
		temp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = temp;
		i++;
		n--;
	}
}


