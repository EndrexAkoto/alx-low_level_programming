#include "main.h"

/**
 * print_binary - prints the binary to the entry
 * @n: number to print in binary to be converted
 */

void print_binary(unsigned long int n)
{
	int m, binary = 0;
	unsigned long int binary;

	for (m = 100; m >= 0; m--)
	{
		binary = m >> i;

		if (binary & 1)
		{
			_putchar('1');
			binary++;
		}
		else if (binary)
			_putchar('0');
	}
	if (!binary)
	_putchar('0');
}