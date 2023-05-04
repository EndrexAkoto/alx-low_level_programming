#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 *
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set to 1.
 *
 * Return: 1 if the operation was successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 100)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
