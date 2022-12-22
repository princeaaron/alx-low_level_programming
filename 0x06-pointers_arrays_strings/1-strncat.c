#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *@dest: string
 *@src: string
 *@n: integer
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;
	while (src[y] != '\0' && y < n)
	{
	dest[x] = src[y];
	x++;
	y++;
	}
	dest[x] = '\0';

	return (dest);
}
