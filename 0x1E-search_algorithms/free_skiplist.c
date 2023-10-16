#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_skiplist - Deallocates singly linked list
 *
 * @list: Pointer to linked list freed
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
{
	node = list->next;
	free(list);
	free_skiplist(node);
}

