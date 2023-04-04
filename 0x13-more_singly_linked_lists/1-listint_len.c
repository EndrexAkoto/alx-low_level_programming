#include "lists.h"

/**
 *listint_len - returns elements number in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
node_t *current = h;

while (current != NULL) {
    num++;
    current = current->next;
}

return num;
