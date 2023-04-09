#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number of arguments in the command line
 * @argv: vector of arguments
 *
 * Return: Always 0
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s", *argv);
	printf("\n");
	return (0);
}
