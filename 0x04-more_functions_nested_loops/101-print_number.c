#include <stdio.h>
#include "main.h"
/**
 * print_number - prints number using putchar
 * @n: number to be printed
 * return: none
 */
void print_number(int n)
{
	int tmp;
	int tmp2;
	
	tmp = n;

	tmp2 = 1;

	if (n <0)
	{
		_putchar('-');
		n = -n;
	}

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
		_putchar((n/tmp2)%10 + '0');
		tmp2 /= 10;
	}
}
