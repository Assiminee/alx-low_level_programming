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
	int sum1;
	int sum2;
	int *ptr1;
	int *ptr2;

	ptr1 = a;
	ptr2 = a;
	sum1 = *ptr1;
	sum2 = 0;

	for (i = 0; i < size - 1; i++)
	{
		ptr2++;
	}
	for (i = 0; i < size; i++, ptr1 += size + 1)
	{
		sum1 += *ptr1;
	}
	for (i = 0; i < size; i++, ptr2 += (size - 1))
	{
		sum2 += *ptr2;
	}
	printf("%d, %d\ n", sum1, sum2);
}
