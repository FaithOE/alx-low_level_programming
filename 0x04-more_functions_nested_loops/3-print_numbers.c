#include "main.h"

/**
  * print_numbers - C program to print numbers 0 - 9
  *
  */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
