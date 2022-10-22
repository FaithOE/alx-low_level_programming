#include "main.h"

/**
  * more_numbers - print the numbers 0 to 14 ten times
  *
  */

void more_numbers(void)
{
	int num;
	char i;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
