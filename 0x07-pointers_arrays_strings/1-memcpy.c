#include "main.h"

/**
  * _memcpy - A function that copies memory area
  *
  * @dest: Destination memory area
  * @src: Source memory area
  * @n: Number of bytes to be copied
  *
  * Return: A pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
