#include "main.h"
#include <stdio.h>
/**
 *malloc_checked - allocates memory using malloc.
 *@b: unsigned int
 *Return: VOID Pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
