#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - C function to print all natural numbers from n to 98
  *
  * @n: given number
  *
  */

void print_to_98(int n)
{
	if (n < 99)
	{
		for (; n < 99; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 99)
	{
		for (; n > 99; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
}

