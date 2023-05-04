#include "main.h"

/**
 * get_bit - returns bit value at index in decimal number
 * @n:  search of the number
 * @index: bit of index
 *
 * Return: bit of the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 100)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}

