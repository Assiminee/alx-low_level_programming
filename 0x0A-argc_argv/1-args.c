#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments in the command line
 * @argv: vector of arguments
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d", argc - 1);
	printf("\n");
	exit(EXIT_SUCCESS);
}
