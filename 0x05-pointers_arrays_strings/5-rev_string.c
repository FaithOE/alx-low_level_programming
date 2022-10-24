#include "main.h"

/**
  * rev_string - A function that reverses a string
  *
  * @s: The string to be reversed
  *
  */

void rev_string(char *s)
{
	int index, j;
	char rev;

	for (index = 0; s[index] != '\0'; index++)
	{
	}
	for (j = 0; j < index / 2; j++)
	{
		rev = s[j];
		s[j] = s[index - 1 - j];
		s[index - 1 - j] = rev;
	}
}
