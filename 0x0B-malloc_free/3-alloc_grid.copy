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
	int j;

	if (height <= 0 || width <= 0)
		return (NULL);

	full_grid = malloc(width * height * sizeof(int));
	rows = malloc(height * sizeof(int *));
	if (full_grid == NULL || rows == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		rows[i] = full_grid + width * i;
	
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			rows[i][j] = 0;
		}
	}

	return (rows);
}
