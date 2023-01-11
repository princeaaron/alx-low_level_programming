#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
    nt **ptr, x, y;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ptr[x] = (int *)malloc(sizeof(int) * width);

		if (ptr[x] == NULL)
		{
			for (x = 0; x < height; x++)
			{
				free(ptr[x]);
			}
			free(ptr);
			return (NULL);
		}

		for (y = 0; y < width; y++)
		{
			ptr[x][y] = 0;
		}
	}

	return (ptr);
}
