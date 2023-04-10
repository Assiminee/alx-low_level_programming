#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments in the command line
 * @argv: vector of arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int sum;
	int i;
	unsigned long int j;
	char *arg;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			arg = argv[i];
			for (j = 0; j < strlen(arg); j++)
			{
				if (arg[j] < '0' || arg[j] > '9')
				{
					printf("Error");
					printf("\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
