#include <stdio.h>

/**
  * main - C program to compute and prints the sum of multiples of 3 and 5
  * below 1024
  *
  * Return: 0
  *
  */

int main(void)
{
	int multiple, sum;

	for (multiple = 1; multiple < 1024; multiple++)
	{
		if ((multiple % 3) == 0 || (multiple % 5) == 0)
		{
			sum = sum + multiple;
		}
	}
	printf("%d\n", multiple);

	return (0);
}
