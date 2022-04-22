#include <stdio.h>
#include "lists.h"
/**
* first - prints before the main.
*
* Return: Void.
*
*/
void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
