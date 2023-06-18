#include "lists.h"

/**
* add_dnodeint_end - Add new node at the end of dlistint_t list
* @head: Double pointer to  first node in the list
* @n: integer to put in  new node
*
* Return: Address of new node, NULL if it fails
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *last_node;

/* Allocate memory for  new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}

/* Initialize new node */
new_node->n = n;
new_node->next = NULL;

/* If list is empty, insert new node at the head */
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

/* Traverse to last node */
last_node = *head;
while (last_node->next != NULL)
{
last_node = last_node->next;
}

/* Attach new inode at the end */
last_node->next = new_node;
new_node->prev = last_node;

return (new_node);
}
