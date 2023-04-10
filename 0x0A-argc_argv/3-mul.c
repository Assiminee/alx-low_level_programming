#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments in the command line
 * @argv: vector of arguments
 *
 * Return: Always 0 
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	int n1;
	int n2;

	n1 = 0;
	n2 = 0;
	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d", n1 * n2);
		printf("\n");
	}
	else
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	return (0);
}
