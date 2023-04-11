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
	int **rows;
	int i;
	int j;

	if (height <= 0 || width <= 0)
		return (NULL);

	rows = (int **)malloc(height * sizeof(int *));
	if (rows == NULL)
	{
		free(rows);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		rows[i] = (int *)malloc(width * sizeof(int));
		if (rows[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(rows[j]);
			}
			free(rows);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			rows[i][j] = 0;
		}
	}

	return (rows);
}
