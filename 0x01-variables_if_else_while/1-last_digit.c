#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int Last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_dig = n % 10;
	if((Last_dig) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Last_dig);
	}
	else if((Last_dig) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Last_dig);
	}
	else if((Last_dig < 6) && (Last_dig != 0))
	{
		printf("Last digit of %d is %d and is less that 6 and not 0\n", n, Last_dig);
	}
	return (0);
}


