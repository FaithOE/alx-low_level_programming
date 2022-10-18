/**
 * print_alphabet_x10 - Entry point
 * Description: A C program to print the alphabet in lowercase 10 times
 * Return: 0 if successful
 */

void print_alphabet_x10(void)
{
	char lcase;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (lcase = 'a'; lcase <= 'z'; lcase++)
		{
			putchar(lcase);
		}
	putchar('\n');
	}
	return (0);
}

/**
  * main - Entry point
  * Description: Use the function print_alphabet_x10
  * Return: 0 if successful
  */

int main(void)
{
	print_alphabet_x10();
	return (0);
}
