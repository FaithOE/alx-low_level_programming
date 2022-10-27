#include "main.h"

/**
  * _strncat - A function that concatenates two strings
  *
  * @dest: Pointer to destination string
  * @src: Pointer to source string
  * @n: Number of bytes to be copied
  *
  * Return: A pointer to the resulting string
  */

char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];

	}
	dest[length] = '\0';

	return (dest);

}
