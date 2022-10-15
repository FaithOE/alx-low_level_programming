#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: A C program to print all lowercase alphabet in reverse
* Return: 0 if successful
*/

int main(void)
{
	char lcase;

	for (lcase = 'z'; lcase >= 'a'; lcase--)
	{
		putchar(lcase);
	}
	putchar('\n');
	return (0);
}
