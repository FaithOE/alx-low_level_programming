#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: A C program to print hexadecimal numbers in lowercase
* Return: 0 if successful
*/

int main(void)
{
	int num;
	char hex;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
