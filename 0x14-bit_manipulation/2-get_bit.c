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
	unsigned int max_index = sizeof(unsigned long int) * 8 - 1;

	if (index > max_index)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	return (0);
}
