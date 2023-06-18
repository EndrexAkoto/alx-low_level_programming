#include "lists.h"

/**
* free_dlistint - Frees a dlistint_t list
* @head:  pointer to the first node in the list
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *next_node;

/* Loop through list and free nodes */
while (head != NULL)
{
next_node = head->next;
free(head);
head = next_node;
}
}
