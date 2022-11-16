#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of a person
 * @f: pointer to print function
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
