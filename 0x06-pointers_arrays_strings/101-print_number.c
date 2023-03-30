#include <stdio.h>
#include "main.h"
/**
 * print_number - prints number using putchar
 * @n: number to be printed
 *
 * return: void
 */
void print_number(int n)
{
	unsigned int tmp;
	unsigned int tmp2;

	tmp2 = 1;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	tmp = n;
	while (tmp)
	{
		tmp /= 10;
		if (tmp != 0)
		{
			tmp2 *= 10;
		}
	}
	while (tmp2)
	{
		_putchar(((unsigned int) n / tmp2) % 10 + '0');
		tmp2 /= 10;
	}
}
