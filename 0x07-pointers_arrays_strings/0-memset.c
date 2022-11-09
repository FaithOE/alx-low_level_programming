#include "main.h"

/**
  * _memset - A function that fills memory with a constant byte
  *
  * @s: Pointer
  * @b: Constant byte
  * @n: Number of bytes
  *
  * Return: A pointer to the memory area s
  */

char *_memset(char *s, char *b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
