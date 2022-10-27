#include "main.h"

/**
  * cap_string - A function that capitalizes all words of a string
  *
  * @str: The string to be modified
  *
  * Return: The modified string
  */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\n'
				|| str[i - 1] == '\t' || str[i - 1] == ','
				|| str[i - 1] == ';' || str[i - 1] == '.'
				|| str[i - 1] == '!' || str[i - 1] == '?'
				|| str[i - 1] == '"' || str[i - 1] == '('
				|| str[i - 1] == ')' || str[i - 1] == '{'
				|| str[i - 1] == '}')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);

}
