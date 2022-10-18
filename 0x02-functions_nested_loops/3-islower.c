#include "main.h"
#include <ctype.h>

/**
  * _islower - C function to check for lowercase characters
  *
  *@c: character
  *
  * Return: 1 if successful; 0 if not successful
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
