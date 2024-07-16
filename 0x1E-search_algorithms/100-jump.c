#include "search_algos.h"
#include <stdio.h>

/**
 * jump_search - performs jump search on an array
 * @array: pointer to the first element of the array
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value if found, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	int low, high, block;

	if (!array)
		return (-1);

	block = (int)sqrt(size);
	low = 0;
	high = block;

	while (low < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (high >= (int)size || array[high] >= value) {
			printf("Value found between indexes [%d] and [%d]\n", low, high);
			return iterate(array, low, high >= (int)size ? (int)size - 1 : high, value);
		}
		low = high;
		high += block;
		/*
		else
		{
			if (array[high] <= value)
			{
				printf("Value checked array[%d] = [%d]\n", low, array[low]);
				printf("Value checked array[%d] = [%d]\n", high, array[high]);
				low = high;
				high += block;
			}
			else
				return (iterate(array, low, high, value));
		}
		*/
	}
	return (-1);
}

int iterate(int *array, int start, int stop, int value)
{
	int i;

	for (i = start; i <= stop; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
