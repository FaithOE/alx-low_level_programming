#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: A C program to print single digit numbers with space and comma
* Return: 0 if successful
*/

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
