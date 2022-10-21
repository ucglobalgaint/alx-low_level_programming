#include "main.h"

/**
 * print_numbers - print from 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 9)
		_putchar(a++ + '0');

	__putchar('\n');
}
