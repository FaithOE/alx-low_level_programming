#include "main.h"

/**
  * print_triangle - print a triangle of n size
  *
  * @size: int as size of the triangle
  */

void print_triangle(int size)
{
	int b, h, i; /* breadth, height */

	if (size > 0)
	{
		for (b = 1; b <= size; b++)
		{
			for (h = size - b; h > 1; h--)
			{
				_putchar(' ');
			}
			for (i = b + h; i >= 1; i--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
