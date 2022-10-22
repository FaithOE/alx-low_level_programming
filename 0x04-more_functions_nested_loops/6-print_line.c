#include "main.h"

/**
  * print_line - print a straight line of varying lengths n
  *
  * @n: integer for length of line
  */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
