#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search - performs exponential search on an array
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: element to find
 *
 * Return: the index of "value" if found, else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t exp, right, left;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	exp = 1;

	while (exp < size && array[exp] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", exp, array[exp]);
		exp *= 2;
	}

	left = exp / 2;
	right = exp >= size ? size - 1 : exp;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	return (bin_search(array, left, right, value));
	
}

/**
 * binary_search - performs a binary search on an array
 * @array: pointer to first element of array
 * @low: low bound of array
 * @high: high bound of array
 * @value: value to search for
 *
 * Return: index of value if found, else -1
 */
int bin_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

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

