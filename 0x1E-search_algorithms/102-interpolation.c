#include "search_algos.h"

/**
  * interpolation_search - Searches for value sorted array
  *                        of integers using interpolation search
  * @array: pointer to first element of array search
  * @size: number of elements in array
  * @value: value to search for
  *
  * Return: If value is not present or the array is NULL, -1
  *         Otherwise, first index where value is located
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	/* Checks if array is NULL */
	if (array == NULL)
		return (-1);

	/* Performs interpolation search */
	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}

