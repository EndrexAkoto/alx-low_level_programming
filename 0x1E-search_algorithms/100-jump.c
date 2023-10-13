#include "search_algos.h"
/**
  * jump_search - Searches for value in sorted array
  *               integers using jump search
  * @array: pointer to first element of array search
  * @size: element number in array
  * @value: value to search for
  *
  * Return: If value isn't present or array NULL, -1
  *         Otherwise, first index where value is located
  */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	/* Checks if array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);

	/* Calculate jump step size */
	step = sqrt(size);

	/* Performs jump search */
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

		/* Stores previous jump position */
		i = jump;

		/* Updates jump position */
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	/* Adjusts jump position */
	jump = jump < size - 1 ? jump : size - 1;

	/* Performs linear search within identified range */
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	/* Checks if value is found and return corresponding index */
	return (array[i] == value ? (int)i : -1);
}

