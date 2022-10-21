#include <stdio.h>

/**
  * main - C program to find and print largest prime factor of given number
  * Return: 0 if successful
  *
  */

int main(void)
{
	long i, number = 612852475143;

	for (i  = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%lu\n", i)

	return (0);
}
