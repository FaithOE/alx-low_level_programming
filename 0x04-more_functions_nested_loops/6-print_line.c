#include "main.h"

/**
  * print_line - print a straight line of varying lengths n
  *
  */

void print_line(int n)
{
	char line;

	if (n > 0)
	{
		for (line = '0'; line <= n; line++)
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
