#include "search_algos.h"

/**
 * jump_list - Searches for value in sorted singly linked list
 *             of integers using jump search
 * @list: pointer to head of linked list to search
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: If the value is not present or head of the list is NULL, NULL
 *         Otherwise, pointer to first node where the value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	/* Checks if list is NULL or empty */
	if (list == NULL || size == 0)
		return (NULL);

	step = 0;

	/* Calculates jump step size */
	step_size = sqrt(size);

	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		/* Stores previous jump node */
		node = jump;

		for (step += step_size; jump->index < step; jump = jump->next)
		{
			/* If reached end of the list */
			if (jump->index + 1 == size)
				break;
		}

		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}

