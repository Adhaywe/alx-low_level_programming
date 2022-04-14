#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings to be printed
 * 
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    int i;
    va_list list;
    char *str;

    va_start(list, n);
    for (i = 0; i < n; i++)
    {
        str = va_arg(list, char *);
        if (str)
        {
             printf("%s", str);
        }
        else
            printf("(nil)");
        if (separator && i < n -1)
        {
            printf("%s", separator);
        }
    }
    va_end(list);
    printf("\n");
}
