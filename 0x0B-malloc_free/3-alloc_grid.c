#include <stdlib.h>

/**
 * alloc_grid - Allocate a 2D array of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the allocated 2D array.
 *         NULL on failure or if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    /* Allocate memory for the rows */
    grid = (int **)malloc(height * sizeof(int *));
    
    if (grid == NULL)
        return (NULL);

    /* Allocate memory for each row and initialize elements to 0 */
    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));

        if (grid[i] == NULL)
        {
            /* Free previously allocated memory in case of failure */
            for (j = 0; j < i; j++)
                free(grid[j]);
            
            free(grid);
            return (NULL);
        }

        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}

