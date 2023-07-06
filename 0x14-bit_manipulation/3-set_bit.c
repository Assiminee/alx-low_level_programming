#include "main.h"
/**
 * set_bit - sets bit at a given index to 1
 * @n: pointer to number to be changed
 * @index: index of bit to be set to 1
 *
 * Return: 1 if it worked, -1 if it failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int maxIndex = sizeof(unsigned long int) * 8 - 1;
	unsigned long int secondOp = 1UL << (unsigned long int)index;

	if (maxIndex < index)
		return (-1);

	*n |= secondOp;
	return (1);
}
