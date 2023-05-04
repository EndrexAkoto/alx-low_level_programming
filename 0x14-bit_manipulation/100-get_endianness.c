#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if the system is big-endian, 1 if the system is little-endian.
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *chr = (char *) &b;

	return (*chr);
}
