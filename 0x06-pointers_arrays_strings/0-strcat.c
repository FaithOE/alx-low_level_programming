#include "main.h"

/**
  * _strcat - A function that concatenates two strings
  *
  * @dest: Pointer to destination string
  * @src: Pointer to source string
  *
  * Return: A pointer to the resulting string
  */

char *_strcat(char *dest, char *src)
{
	int length, i;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (i = 0; src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';

	return (dest);

}
