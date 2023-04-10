#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments in the command line
 * @argv: vector of arguments
 *
 * Return: 0 if argc > 1, 1 if argc == 1 
 */
int main(int __attribute__ ((unused))  argc, char **argv)
{
	int result;
	int i;

	result = 1;
	if (argc == 1)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	printf("%d", result);
	printf("\n");
	exit (EXIT_SUCCESS);
}
