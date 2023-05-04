#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped to
 *             convert one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be flipped to convert
 *         n to m.
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
