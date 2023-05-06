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
	unsigned long int bit = 1UL << index;
	unsigned int max_index = sizeof(unsigned long int) * 8 - 1;

	if (n == NULL || index > max_index)
		return (-1);
	*n = *n | bit;
	return (1);
}
