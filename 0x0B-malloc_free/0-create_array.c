#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a char.
 * @size: size of array
 * @c: specific character to initialize the array with.
 *
 * Return: pointer to the base address of the array.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		ptr[x] = c;
	}

	ptr[++x] = '\0';
	return (ptr);
}
