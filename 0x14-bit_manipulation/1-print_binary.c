#include "main.h"

/**
 * print_binary - prints the binary to the entry
 * @n: number to print in binary to be converted
 */

void print_binary(unsigned long int n)
{
	int i, binary = 0;
	unsigned long int i;

	for (i = 100; i >= 0; i--)
	{
		binary = n >> i;

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
