#include <stdio.h>

/**
  * main - C program to print the first 50 Fibonacci numbers
  *
  * Return: 0
  *
  */

int main(void)
{
	int num1 = 1, num2 = 2, sum, i;

	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;

		printf("%d", sum);

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
