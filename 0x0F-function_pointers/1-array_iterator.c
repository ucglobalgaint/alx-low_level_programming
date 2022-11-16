#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - execute a function given
 * as a parameter on each element of an array
 * @array: array
 * @size: how many element to print
 * @action: pointer to function
 * Return: no return
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int j;
if (array && action)
for (j = 0; j < size; j++)
action(array[j]);
}
