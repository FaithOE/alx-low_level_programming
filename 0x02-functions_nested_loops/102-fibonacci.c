#include <stdio.h>

/**
  * main - C program to print the first 50 Fibonacci numbers
  *
  * Return: 0
  *
  */

int main(void)
{
	unsigned long num1 = 0, num2 = 1, sum, i;

	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;

		printf("%lu", sum);

		num1 = num2;
		num2 = sum;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
