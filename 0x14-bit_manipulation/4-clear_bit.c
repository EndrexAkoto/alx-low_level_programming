#include "main.h"

/**
 * clear_bit - Sets the value of a given bit to 0.
 *
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if the operation was successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 100)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
