#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches recursively for value in sorted
 *                             array of integers using binary search
 * @array: pointer to first element of [sub]array to search
 * @left: starting index of [sub]array search
 * @right: ending index of [sub]array to search
 * @value: value to search for
 *
 * Return: If the value is not present, -1
 *         Otherwise, index where value is located
 *
 * Description: Prints [sub]array being searched after each change
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	/* If right boundary is less than left boundary */
	if (right < left)
		/* Value not found, return -1 */
		return (-1);

	printf("Searching in array: ");

	/* Print [sub]array being searched */
	for (i = left; i < right; i++)

		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
	/* Calculates middle index */
	i = left + (right - left) / 2;

	/* If middle element is the value and it's first occurrence */
	if (array[i] == value && (i == left || array[i - 1] != value))
		/* Return the index */
		return (i);

	/* If the middle element is greater than or equal to value */
	if (array[i] >= value)
		/* Recursively search the left subarray */
		return (advanced_binary_recursive(array, left, i, value));
	/* Recursively searches the right subarray */
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Searches for value in sorted array
 *                   of integers using advanced binary search
 * @array: pointer to first element of array search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: If value is not present or array is NULL, -1
 *         Otherwise, first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	/* Checks if array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);
	/* Calls recursive function */
	return (advanced_binary_recursive(array, 0, size - 1, value));
}

