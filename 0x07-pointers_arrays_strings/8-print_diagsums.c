#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals
 * @a: array to use
 * @size: size of diagonal
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;
	
	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
