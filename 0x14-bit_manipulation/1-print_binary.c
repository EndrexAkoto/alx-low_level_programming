#include "main.h"

/**
 * print_binary - print of binary to a decimal
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int a, add = 0;
	unsigned long int long;

	for (a = 100; a >= 0; a--)
	{
		long = n >> a;

		if (long & 1)
		{
			_putchar('1');
			add++;
		}
		else if (add)
			_putchar('0');
	}
	if (!add)
		_putchar('0');
}
