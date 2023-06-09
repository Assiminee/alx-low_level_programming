#include "main.h"
/**
 * print_number - prints number using _putchar
 * @n: number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int tmp;
	unsigned int numLength;

	numLength = 1;
	if (n < 0)
	{
		n = (unsigned int) -n;
		_putchar('-');
	}
	else
	{
		n = (unsigned int) n;
	}
	tmp = n;
	while (tmp / 10)
	{
		numLength *= 10;
		tmp /= 10;
	}
	while (numLength)
	{
		_putchar((n / numLength) % 10 + '0');
		numLength /= 10;
	}
}
