#include "main.h"

/**
  * print_times_table - C function to print the n times table
  *
  * @n: the given number
  *
  */

void print_times_table(int n)
{
	int number, multiplier, product;

	if (n >= 0 && n <= 15)
	{
		for (number = 0; number <= n; number++)
		{
			_putchar('0');
			for (multiplier = 1; multiplier <= n; multiplier++)
			{
				product = number * multiplier;

				_putchar(',');
				_putchar(' ');

				if (product <= 9)
				{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
				}
				else if (product <= 99)
				{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				}
				else
				{
				_putchar(((product / 100) % 10) + '0');
				_putchar(((product % 10) % 10) + '0');
				_putchar((product % 10) + '0');
				}
			}
		_putchar('\n');
		}
	}
}
