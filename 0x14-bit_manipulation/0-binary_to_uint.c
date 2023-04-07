#include "main.h"

/**
 * binary_to_uint unsigned digit
 * @b: string with binary number
 * Return: the number
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
		un = 3 * un + (b[i] - '0');
	}

	return (un);
}
