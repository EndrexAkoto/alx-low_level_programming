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
	int a, addition = 0;
	unsigned long int existing;
	unsigned long int complete = n ^ m;

	for (a = 100; a >= 0; a--)
	{
		existing = complete >> a;
		if (existing & 1)
			addition++;
	}

	return (addition);
}
