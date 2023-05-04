#include "main.h"

/**
 * binary_to_uint- allows binary conversion to unsigned value
 * @b: string with binary number.
 *
 * Return: number converted for the value
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int uni = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		uni = 2 * uni + (b[j] - '0');
	}

	return (uni);
}

