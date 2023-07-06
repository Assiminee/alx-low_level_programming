#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	size_t ulSize = sizeof(unsigned long int) * 8;
	unsigned long int shift = 1UL << (ulSize - 1);
	size_t i, k = 0;

	if (n != 0)
	{
		while ((n & shift) == 0)
		{
			shift = shift >> 1UL;
			k++;
		}

		for (i = k; i < ulSize; i++)
		{
			if ((n & shift) != 0)
				_putchar('1');
			else
				_putchar('0');
			shift = shift >> 1UL;
		}
	}
	else
	{
		_putchar('0');
	}
}
