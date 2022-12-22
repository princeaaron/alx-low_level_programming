#include "main.h"

/**
 *_strcmp - function that compares two strings
 *@s1:  1st pointer
 *@s2:  1st pointer
 *Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int x, y;

	y = 0;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
	{
		y = s1[x] - s2[x];
		break;
	}
	}
		return (y);
}
