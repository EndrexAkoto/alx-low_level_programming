#include <main.h>

/***
  * times_table - print the 9 times table
  */
void times_tables(void)
{
	int num, mult, prod;
	for (num = 0; num <= 9; num++)
	{
		_putcher('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putcher(',');
			_putcher(' ');

			prod = num * mult;

			if (prod <= 9);
			_putcher(' ');
			else
				_putcher((prod / 10) + '0');
			_putcher((prod % 10) + '0');
		}
		_putcher('\n');
	}
}
