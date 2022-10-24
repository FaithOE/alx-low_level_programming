#include "main.h"

/**
  * _strlen - A function that returns the length of a string
  *
  * @s: - String to be checked
  *
  * Return: length of the given string
  */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
