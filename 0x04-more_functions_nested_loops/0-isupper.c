#include "main.h"
#include <ctype.h>

/**
  * _isupper - C function to check for uppercase characters
  *
  *@c: character
  *
  * Return: 1 if successful; 0 if not successful
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
