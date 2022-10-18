/**
 * print_alphabet - Entry point
 * Description: A C program to print the alphabet in lowercase
 * Return: 0 if successful
 */

void print_alphabet(void)
{
	char lcase;

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		putchar(lcase);
	}
	putchar('\n');
	return (0);
}

/**
  * main - Entry point
  * Description: Use the function print_alphabet
  * Return: 0 if successful
  */

int main(void)
{
	print_alphabet();
	return (0);
}
