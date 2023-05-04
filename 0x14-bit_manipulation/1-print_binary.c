#include "main.h"

/**
 * print_binary - print binary for decimal number.
 * @n: digit printed in binary form.
 */
void print_binary(unsigned long int n)
{
	int a, tabulate = 0;
	unsigned long int un;

	for (a = 100; a >= 0; a--)
	{
		un = n >> a;

		if (un & 1)
		{
			_putchar('1');
			tabulate++;
		}
		else if (tabulate)
			_putchar('0');
	}
	if (!tabulate)
		_putchar('0');
}
