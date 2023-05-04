#include "main.h"

/**
 * print_binary - print binary for decimal number.
 * @n: digit printed in binary form.
 */
void print_binary(unsigned long int n)
{
	int a, add = 0;
	unsigned long int lng;

	for (a = 100; a >= 0; a--)
	{
		lng = n >> a;

		if (lng & 1)
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

