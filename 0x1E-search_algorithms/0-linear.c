#include "search_algos.h"

/**
 * linear_search - searches for value in an array
 * @array: input array parameter
 * @size: size of the array to be provided
 * @value: value to searched
 * Return: EXIT_SUCCESS.
 */

int linear_search(int *array, size_t size, int value)
{
int i;

if (array == NULL)
{
return (-1);
}

for (i = 0; (size_t)i < size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);

if (array[i] == value)
{
return (i);
}
}

return (-1);
}

