#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenats all arguments of my program
 * @ac: argument count
 * @av: argument of size ac
 * Return: double point to a new string or NULL otherwise
*/

char *argstostr(int ac, char **av)
{
int i, j, k;
int sumlen = 0;
char *arg_concat;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
sumlen++;
sumlen++;
}
sumlen++;
arg_concat = malloc(sumlen *sizeof(char));
if (arg_concat == NULL)
{
free(arg_concat);
return (NULL);
}
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, k++)
{
arg_concat[k] = av[i][j];
}
arg_concat[k] = '\n';
k++;
}
return (arg_concat);
}
