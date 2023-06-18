#include "lists.h"

/**
* get_dnodeint_at_index - Returns node at a
* given position in a doubly linked list
* @head: Pointer to first node in the list
* @index: position of node to return
*
* Return: The node at position index, or NULL if the node does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int counter = 0;

/* Traverse list to find the node at index */
while (head != NULL)
{
/* If  current node is the one we're looking for, return it */
if (counter == index)
{
return (head);
}

/* Move to the next node and increment the counter */
head = head->next;
counter++;
}

/* If reached this point, node at index doesn't exist */
return (NULL);
}
