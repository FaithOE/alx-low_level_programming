#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: A C program to print all single digit numbers starting from 0
* using putchar
* Return: 0 if successful
*/

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
