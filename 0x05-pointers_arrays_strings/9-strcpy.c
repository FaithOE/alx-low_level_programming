#include "main.h"

/**
  * _strcpy - A function that copies the string pointed to by src to the buffer
  * pointed to by another pointer dest.
  *
  * @dest: Where the string is be copied to
  * @src: Where the string is copied from
  *
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	j = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
