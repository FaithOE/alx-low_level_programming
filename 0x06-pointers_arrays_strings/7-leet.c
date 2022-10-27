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
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
		}

	}

	return (str);
}
