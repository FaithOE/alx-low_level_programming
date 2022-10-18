#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: A C function to print the alphabet in lowercase
 */

void print_alphabet(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		_putchar(lcase);
	}
	_putchar('\n');
}
