#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of linked list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
listint_t *current;
int f;

if (head == NULL)
return (0);

current = *head;
if (current == NULL)
return (0);

f = current->n;
*head = current->next;
free(current);
return (f);
}
