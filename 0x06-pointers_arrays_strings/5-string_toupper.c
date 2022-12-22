#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: pointer
 * Return: pointer
 */

char *string_toupper(char *a)
{
	int x;

	for (x = 0; a[x] != 0; x++)
	{
		if (a[x] > 90 && a[x] != 10)
	{
		a[x] = a[x] - 32;
	}
	}
	return (a);
}
