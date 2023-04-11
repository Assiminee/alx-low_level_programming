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

	if (height <= 0 || width <= 0)
		return (NULL);

	rows = (int **)calloc(height, sizeof(int *));
	if (rows == NULL)
	{
		free(rows);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		rows[i] = (int *)calloc(width, sizeof(int));
		if (rows[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(rows[i]);
			}
			free(rows);
			return (NULL);
		}
	}

	return (rows);
}
