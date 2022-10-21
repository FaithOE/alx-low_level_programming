#include "main.h"

/**
  * print_diagonal - print a straight line of varying lengths n
  *
  * @n: integer for length of line
  */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = '0'; a < n; a++)
		{
			for (b = '0'; b <= a; b++)
			{
				if (a == b)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n')
	}
}
