#include "main.h"

/**
  * print_rev - A function to print a string in reverse
  *
  * @s - The string to be reversed
  *
  */

void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
	}

	for (index--; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');

}
