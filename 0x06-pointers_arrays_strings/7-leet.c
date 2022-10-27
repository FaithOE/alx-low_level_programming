#include "main.h"

/**
  * leet - A function that encodes a string into 1337.
  * Letters a, e, o, t, l are replaced by 4, 3, 0, 7, and 1 respectively
  *
  * @str: The string to be modified
  *
  * Return: The modified string
  */

char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'A' || str[i] == 'a')
		{
			str[i] = '4';
		}
		else if (str[i] == 'E' || str[i] == 'e')
		{
			str[i] = '3';
		}
		else if (str[i] == 'O' || str[i] == 'o')
		{
			str[i] = '0';
		}
		else if (str[i] == 'T' || str[i] == 't')
		{
			str[i] = '7';
		}
		else if (str[i] == 'L' || str[i] == 'l')
		{
			str[i] = '1';
		}
		else
		{
			continue;
		}
	}
	return (str);
}
