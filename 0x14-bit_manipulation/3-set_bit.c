#include "main.h"
#include <stddef.h>

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit  set at 1
 *
 * Return: 1 for success and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;
	*num |= mask;
	if (n == NULL)
		return (-1);
	mask <<= index;
	*n = *n | mask;
	return (1);
}
