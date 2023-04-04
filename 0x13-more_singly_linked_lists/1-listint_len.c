#include "lists.h"

/**
 *listint_len - returns elements of a number in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
int num_nodes = 0; 

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes); 
}
