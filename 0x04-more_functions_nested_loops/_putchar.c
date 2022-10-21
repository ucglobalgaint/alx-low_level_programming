#include <stdio.h>
#include "main.h"

/**
 * main - write the character c to stdout
 * @c: The character to print
 * Return: On success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
