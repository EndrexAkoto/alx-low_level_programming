#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: points towards the digit to be changed
 * @index - to be cleared
 *
 * Return: 1 for success while -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 100)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
