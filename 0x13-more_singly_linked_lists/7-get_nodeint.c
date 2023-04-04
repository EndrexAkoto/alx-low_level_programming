#include "lists.h"

/**
 * get_nodeint_at_index - returns node at certain index in linked list
 * @head: first node in linked list
 * @index: index of the node return
 * Return: pointer node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
 unsigned int i = 0;

 listint_t *tmp = head;

 while (tmp && i < index)
 {
 tmp = tmp->next;
 i++;
 }

 return (tmp ? tmp : NULL);
}
