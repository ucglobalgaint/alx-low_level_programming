#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings. it will use
 * at most n bytes from src. src does not need to be null terminated
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to be concatenated
 * Return: new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, l;
	/* l is a counter for  n bytes of src to be concatenated */
	/* i = length of destination string */

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (l = 0; l < n && src[l] != '\0'; l++, i++)
	{
		dest[i] = src[l];
	}
	dest[i] = '\0';
	return (dest);
}
