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
    int **2Dim, x;

    if (width <= 0 || height <= 0)
        return (NULL);

    2Dim =  (int **) malloc(height * sizeof(int *));

    if (2Dim == NULL)
        return (NULL);

    for (x = 0; x < height; x++)
    {
        2Dim[x] = malloc(width * sizeof(int));
        if (2Dim[x] == NULL)
        {
            while (x >= 0)
            {
                free(2Dim[x]);
                x--;
            }
            free(2Dim);
            return (NULL);
        }
    }
    return (2Dim);
}
