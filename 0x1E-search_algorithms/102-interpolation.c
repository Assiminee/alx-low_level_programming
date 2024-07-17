#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - performs interpolation search on an array
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of value if found, else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		pos = low + (
				((double)(high - low) / (array[high] - array[low])) *
				(value - array[low])
				);

		printf("Value checked array[%ld] ", pos);
		if (pos >= size)
		{
			printf("is out of range\n");
			return (-1);
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			low = pos - 1;
		else
			return ((int)pos);
	}
	return (-1);
}
