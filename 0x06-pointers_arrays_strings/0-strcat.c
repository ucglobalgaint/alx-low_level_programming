#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: new char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j && src[i] != '\0'; i++)
		dest[j + i] = src[i];
	dest[j + i] = '\0';
	return (dest);

}
