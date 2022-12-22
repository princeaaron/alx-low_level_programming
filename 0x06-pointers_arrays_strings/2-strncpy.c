#include "main.h"

/**
 * _strncpy - function that copies a string
 * @src: pointer of string
 * @dest: pointer of string
 * @n: integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	if (x < n)
	{
		for (; x < n; x++)

		dest[x] = '\0';
  }
	return (dest);
}
