#include"main.h"

/**
 * times_table - print the 9 times table
 */

void times_table(void)

{
	int i, j, m, md, mu;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			m = i * j;
			md = m / 10;
			mu = m % 10;
			_putchar(',');
			_putchar(' ');
			if (md)
				_putchar('0' + md);
			else
				_putchar(' ');
			_putchar('0' + mu);

		}
		_putchar('\n');
	}
}
