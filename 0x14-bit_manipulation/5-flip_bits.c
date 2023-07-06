#include "main.h"
/**
 * flip_bits - finds number of bits to flip to get from a number to another
 * @n: original number
 * @m: target number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t i;
	size_t ulSize = sizeof(unsigned long int) * 8;
	unsigned int flippedBits = 0;
	unsigned long int shift = 1UL << ((unsigned long int)ulSize - 1);
	unsigned long int res = n ^ m;

	for (i = 0; i < ulSize; i++)
	{
		if ((shift & res) != 0)
			flippedBits += 1;
		shift >>= 1UL;
	}
	return (flippedBits);
}
