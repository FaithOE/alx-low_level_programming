#include "main.h"

/**
  * reverse_array - A function that compares two strings
  *
  * @a: Array
  * @n: Number of elements in the array
  *
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}

}
