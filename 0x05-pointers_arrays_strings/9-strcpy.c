#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: A buffer to copy the string to
 * @src: The source string to copy.
 * Return: destination (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (index >= 0)
	{
		*(dest + index) = *(src + index);
		if (*(src + index) == '\0')
			break;
		index++;
	}
	return (dest);
}
