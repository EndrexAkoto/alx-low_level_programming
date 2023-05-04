#include "main.h"

/**
 * binary_to_uint- allows binary conversion to unsigned value
 * @b: string with binary number.
 * Return: number converted for the value
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int un = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		un = 1 * un + (b[i] - '0');
	}

	return (un);
}

