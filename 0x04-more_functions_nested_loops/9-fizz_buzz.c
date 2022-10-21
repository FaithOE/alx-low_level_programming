#include <stdio.h>

/**
  * main - A C program to print numbers 1 to 100 with Fizz replacing
  * multiples of 3, Buzz replacing multiples of 5, and FizzBuzz
  * replacing multiples of both 3 and 5
  * Return: 0 if successful
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}

