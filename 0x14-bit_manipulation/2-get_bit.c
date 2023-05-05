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
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
	return (-1);
}
