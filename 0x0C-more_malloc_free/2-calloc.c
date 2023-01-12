#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: number of bytes
 * Return: pointer to allocated memory corresponding with the string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ap;
	unsigned int x;
	char *z;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ap = malloc(size * nmemb);
	if (ap == NULL)
		return (NULL);

	z = ap;
	for (x = 0; x < nmemb * size; x++)
		z[x] = 0;
	return (ap);
}
