#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
size_t nbm_nodes = 0;
const list_t *current = h;

while (current != NULL)
{
printf("[%d] %s\n", current->len,
current->str != NULL ? current->str : "(nil)");
current = current->next;
nbm_nodes++;
}
return (nbm_nodes);
}
