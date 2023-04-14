#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: first value in array
 * @man: last value in array
 *
 * Return: pointer to int
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	j = min;
	while (j <= max)
	{
		ptr[i] = j;
		i++;
		j++;
	}
	return (ptr);
}
