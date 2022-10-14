#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: A C program to print the alphabet in lowercase minus 'e' and 'q'
* Return: 0 if successful
*/

int main(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		if (lcase != 'e' && lcase != 'q')
		{
			putchar(lcase);
		}
	}
	putchar('\n');

	return (0);
}
