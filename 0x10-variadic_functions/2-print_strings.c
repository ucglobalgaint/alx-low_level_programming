#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: NULL else nil
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *str;
va_start(list, n);

for (i = 0; i < n; i++)
{
str = va_arg(list, char*);
if (str != NULL)
printf("%s", str);
else
printf("(nil)");

if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(list);

putchar ('\n');
}
