#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of triangle.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = size; i > 0; i--)
	{
		for (k = i - 1; k > 0; k--)
		{
			_putchar(' ');
		}
		for (j = i; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
