#include "main.h"

/**
  * times_table - C function to print the 9 times table
  *
  */

void times_table(void)
{
	int number, multiplier, product;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');
		for (multiplier = 0; multiplier <= 9; multiplier++)
		{
			product = number * multiplier;

			_putchar(',');
			_putchar(' ');

			if (product <= 9)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
