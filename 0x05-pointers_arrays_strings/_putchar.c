#include <unistd.h>

/**
  * _putchar - Prints the character c to stdout
  *
  * @c: The character to be printed
  *
  * Return: 1 if successful
  *
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
