#include "main.h"
#include <stdio.h>

/**
  * _strspn - A function that gets the length of a prefix substring
  *
  * @s: The string to be searched
  * @accept: The character to be located
  *
  * Return: The number of bytes in the initial segment of s which consists of 
  * bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
			}
			if (accept[j] == '\0')
			{
				return (length);
			}

		}
	}
	return (length);
}
