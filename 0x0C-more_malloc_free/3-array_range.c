#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: int value
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
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
