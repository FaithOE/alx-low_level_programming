#include "main.h"

/**
  * more_numbers - print the numbers 0 to 14 ten times
  *
  */

void more_numbers(void)
{
	int num;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
