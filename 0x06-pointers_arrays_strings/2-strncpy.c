#include "main.h"

/**
  * _strncpy - A function that copies strings
  *
  * @dest: Pointer to destination string
  * @src: Pointer to source string
  * @n: Number of bytes to be copied
  *
  * Return: A pointer to the copied string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];

	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
