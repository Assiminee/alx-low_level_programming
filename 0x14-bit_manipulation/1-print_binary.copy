#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned long int tmp = 1;
	unsigned long int tmp2 = 1;
	unsigned long int b;
	int f = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (tmp < n)
		{
			tmp *= 2;
			tmp2++;
		}
		for (i = tmp2 - 1; (int)i >= 0; i--)
		{
			b = 1UL << i;
			if (b & n)
			{
				f = 1;
				_putchar('1');
			}
			else if (f > 0)
			{
				_putchar('0');
			}
		}
	}
}
