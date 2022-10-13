#include <stdio.h>

/**
* main - Entry point
* Description: Print out sizes of different data types
* Return: 0 if successful
*/

int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longLongIntType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
