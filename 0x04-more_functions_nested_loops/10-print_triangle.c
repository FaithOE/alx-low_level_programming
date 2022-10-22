#include "main.h"

/**
  * print_triangle - print a triangle of n size
  *
  * @size: int as size of the triangle
  */

void print_triangle(int size)
{
	int b, h; /* breadth, height */

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (b = 1; b <= size; h++)
			{
				if ((h + b) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
