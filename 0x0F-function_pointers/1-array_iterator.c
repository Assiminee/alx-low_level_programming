#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function that executes a function given as a parameter on
 *                  each element of an array.
 *
 * @size: This is large of the array
 * @array: This is the input array
 * @action: This is the input function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
