#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @str: string pointer
 * Return: string poniter
 */

char *cap_string(char *str)
{
	int symb[14] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
	{
			str[0] = str[0] - 32;
	}
	for (j = 0; j < 14; j++)
		if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == symb[j])
			str[i] = str[i] - 32;
	}
	return (str);
}
