#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: A C program to print the alphabet in lowercase
 * Return: 0 if successful
 */

void print_alphabet(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		_putchar(lcase);
	}
	_putchar('\n');
	return (0);
}
