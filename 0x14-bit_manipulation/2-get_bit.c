
#include "main.h"

/**
 * get_bit - returns a value bit at index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 100)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
