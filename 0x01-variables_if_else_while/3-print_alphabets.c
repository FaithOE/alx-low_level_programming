#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: A C program to print the alphabet in lowercase then uppercase
* Return: 0 if successful
*/

int main(void)
{
	char lcase;
	char ucase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		putchar(lcase);
	}
	for (ucase = 'A'; ucase <= 'Z'; ucase++)
	{
		putchar(ucase);
	}
	putchar('\n');

	return (0);
}
