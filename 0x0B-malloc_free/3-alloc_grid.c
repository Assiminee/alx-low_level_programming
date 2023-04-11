#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: number of columns
 * @heigth: number of rows
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
	rows = (int **)calloc(height, sizeof(int *));
	if (full_grid == NULL || rows == NULL)
	{
		free(full_grid);
		free(rows);
		return (NULL);
	}
	for (i = 0; i < height; i++)
		rows[i] = full_grid + width * i;

	return (rows);
}
