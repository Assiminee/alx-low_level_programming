#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all arguments passed to the command line
 * @argc: number of arguments in the command line
 * @argv: vector of arguments
 *
 * Return: Always 0
 */
int main(int argc, char** argv)
{
	while(argc--)
	{
		printf("%s", *argv++);
		if (argc)
		{
			printf("\n");
		}
	}
	printf("\n");
	exit(EXIT_SUCCESS);
}
