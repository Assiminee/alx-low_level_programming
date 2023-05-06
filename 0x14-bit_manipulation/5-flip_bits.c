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
	unsigned long int num = n ^ m;
	unsigned long int i;
	unsigned long int tmp = 1;
	unsigned long int tmp2 = 1;
	unsigned int set_bits = 0;

	while (tmp < num)
	{
		tmp *= 2;
		tmp2++;
	}
	for (i = 0; i <= tmp2 - 1; i++)
	{
		if ((1UL << i) & num)
			set_bits++;
	}
	return (set_bits);
}
