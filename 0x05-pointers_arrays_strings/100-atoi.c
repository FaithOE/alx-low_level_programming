#include "main.h"

/**
  * _atoi - A function that converts a string to an integer
  *
  * @s: The string to be converted
  *
  * Return: integer gotten from string
  */

int _atoi(char *s)
{
	unsigned int cstr = 0;
	int sign = 1;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			cstr = (cstr * 10) + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
	} while (*s++);

	return (cstr * sign);
}
