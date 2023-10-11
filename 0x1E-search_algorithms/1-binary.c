#include "search_algos.h"

/**
 * binary_search - Searches for value in sorted array
 *                 of integers using binary 
 * @array: pointer to first element of array search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: If the value is not present or array is NULL, -1
 *         Otherwise, index where the value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;
	
	/* Check if array is NULL */
	if (array == NULL)
		return (-1);

	/* Performs binary search */
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		
		/* Calculate middle index */
		i = left + (right - left) / 2;
		
		/* If middle element is the value */
		if (array[i] == value)
			/* Return the index */
			return (i);
		
		/* If middle element is greater than the value */
		if (array[i] > value)
			/* Update right boundary */
			right = i - 1;
		else
			/* Otherwise, update left boundary */
			left = i + 1;
	}
	/* Value not found, return -1 */
	return (-1);
}

