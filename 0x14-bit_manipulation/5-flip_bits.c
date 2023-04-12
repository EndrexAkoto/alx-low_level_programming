#include "main.h"

/**
 * flip_bits - count a number of the bits to changed
 * @n: will be the first number
 * @m: will be the second number
 *
 * Return: a digit of bits to changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, addition = 0;
	unsigned long int existing;
	unsigned long int complete = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		existing = complete >> i;
		if (existing & 1)
			addition++;
	}

	return (addition);
}
