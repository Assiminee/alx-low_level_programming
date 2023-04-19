#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of arguments passed
 * @argv: array of elements passed
 *
 * Return: always 0
 */
int main(int argc, char *argv)
{
	int num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2])(num1, num2) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(num1, num2));
	return (0);
}
