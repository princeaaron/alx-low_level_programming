#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *ap, df, dig, y;

	if (min > max)
		return (NULL);
	df = max - min + 1;
	ap = malloc(df * sizeof(int));
	if (ap == NULL)
		return (NULL);

	for (dig = min, y = 0; dig <= max && y < df; dig++, y++)
		ap[y] = dig;

	return (ap);
}
