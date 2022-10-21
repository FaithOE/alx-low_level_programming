#include "main.h"
#include <ctype.h>

/**
  * _isdigit - C function to check for digits (0-9)
  *
  *@c: digit
  *
  * Return: 1 if successful; 0 if not successful
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
