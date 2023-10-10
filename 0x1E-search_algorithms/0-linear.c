#include "search_algos.h"

/**
 * linear_search - Searches for value in array
 *                 of integers using linear search
 * @array: pointer to first element of array to search
 * @size: number of elements in the array
 * @value:value to search for
 *
 * Return: If value is not present or array is NULL, -1
 *         Otherwise, first index where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of array */
	for (i = 0; i < size; i++)
	{
		/* Print value being checked */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* If value not found */
		if (array[i] == value)

			/* Return index value */
			return (i);
	}

	/* Value not found, return -1 */
	return (-1);
}

