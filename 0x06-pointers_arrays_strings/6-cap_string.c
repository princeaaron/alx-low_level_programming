#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @str: string pointer
 * Return: string poniter
 */

char *cap_string(char *str)
{
	int obj[14] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[0] >= 97 && str[0] <= 122)
	{
			str[0] = str[0] - 32;
	}
	for (y = 0; y < 14; y++)
		if (str[x] >= 97 && str[x] <= 122 && str[x - 1] == obj[y])
			str[x] = str[x] - 32;
	}
	return (str);
