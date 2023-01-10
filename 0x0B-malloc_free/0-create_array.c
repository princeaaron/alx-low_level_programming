#include "main.h"
#include <stdlib.h>

/**
 * create_array - an array of chars
 * and initializes it with a specific char.
 * @size : size of an array.
 * @c: character.
 * Return: pointer to the Array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
char *arrPointer;
unsigned int x;

if (size == 0)
	return (NULL);
arrPointer = malloc(sizeof(char) * size);
/*
 * Allocating a specific nb of bytes on the memory
 * and returning a pointer to the allocated memory
 */
if (arrPointer == NULL)
	return (NULL);
else
{
	for (x = 0; x < size; x++)
		arrPointer[x] = c;
		return (arrPointer);
}
}
