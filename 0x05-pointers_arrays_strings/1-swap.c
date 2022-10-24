#include "main.h"

/**
  * swap_int - A function that swaps the values of two integers
  * @a - first integer
  * @b - second integer
  *
  */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
