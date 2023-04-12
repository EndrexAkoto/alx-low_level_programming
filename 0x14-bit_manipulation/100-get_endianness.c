#include "main.h"

/**
 * get_endianness - checks for a little or big endian
 * Return: 0 for big while 1 for little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *ch = (char *) &a;

	return (*ch);
}
