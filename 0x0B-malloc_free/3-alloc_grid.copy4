#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to pointer
 */
int **alloc_grid(int width, int height)
{
	int *full_grid;
	int **rows;
	int i;

	if (height <= 0 || width <= 0)
		return (NULL);

	full_grid = (int *)calloc(width * height, sizeof(int));
	if (full_grid == NULL)
	{
		free(full_grid);
		return (NULL);
	}
	rows = (int **)calloc(height, sizeof(int *));
	if (rows == NULL)
	{
		free(full_grid);
		for (i = 0; i < height; i++)
		{
			free(rows[i]);
		}
		return (NULL);
	}
	for (i = 0; i < height; i++)
		rows[i] = full_grid + width * i;

	return (rows);
}
