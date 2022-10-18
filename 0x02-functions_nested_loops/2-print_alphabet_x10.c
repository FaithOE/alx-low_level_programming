#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: A C function to print the alphabet in lowercase 10 times
 * Return: 0 if successful
 */

void print_alphabet_x10(void)
{
	char lcase;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (lcase = 'a'; lcase <= 'z'; lcase++)
		{
			_putchar(lcase);
		}
	_putchar('\n');
	}
}
