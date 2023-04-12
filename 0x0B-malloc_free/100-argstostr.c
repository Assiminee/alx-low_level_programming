#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen_recursion(char *s);
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments in the command line
 * @av: vector of arguments
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	char *current_arg;
	int i;
	int j;
	int k;
	int allo_mem;

	allo_mem = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		allo_mem += _strlen_recursion(av[i]);

	ptr = (char *)malloc(allo_mem + ac + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		current_arg = *(av + i);
		for (j = 0; j < _strlen_recursion(current_arg); j++)
		{
			ptr[k++] = current_arg[j];
		}
		ptr[k++] = '\n';
	}
	return (ptr);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to char
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(++s));
	}
	return (0);
}
