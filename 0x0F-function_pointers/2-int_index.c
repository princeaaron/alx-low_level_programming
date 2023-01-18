#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: integer array
 * @size: size of array (number of integers)
 * @cmp: function pointer
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, res;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		res = cmp(array[x]);
		if (res == 1)
			return (x);
	}
	return (-1);
}
