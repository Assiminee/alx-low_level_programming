#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index
 * @n: number to check
 * @index: index of bit to find
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int maxIndex = sizeof(unsigned long int) * 8 - 1;
	unsigned long int shifted = n >> (unsigned long int)index;

	if (maxIndex < index)
		return (-1);

	return (shifted & 1UL);
}
