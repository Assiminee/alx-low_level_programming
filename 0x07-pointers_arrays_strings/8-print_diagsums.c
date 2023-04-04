#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of the two diagonals of a square matrix of ints
 * @a: pointer t int
 * @size: size of matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i][j];
		}
	}
	j = size - 1;
	for (i = 0; i < size; i++)
	{
		sum2 += a[i][j];
		j--;
	}
	printf("%d, %d", sum1, sum2);
}
