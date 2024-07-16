#include "search_algos.h"

/**
 * binary_search - performs a binary search on an array
 * @array: pointer to first element of array
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value if found, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int low, high, mid;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		print_array(array, low, high);

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * print_array - prints array in required format
 * @array: pointer to the first element of the array
 * @start: starting position to print from
 * @stop: ending position
 *
 * Return: void
 */
void print_array(int *array, int start, int stop)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= stop; i++)
	{
		printf("%d", array[i]);
		if (i != stop)
			printf(", ");
	}
	printf("\n");
}
