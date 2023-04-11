#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdub - returns a pointer to a new string
 * which is a duplicate of the string s
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i;
	int size;
	char *dupe;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		size++;

	dupe = malloc(size);

	if (dupe == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dupe[i] = str[i];

	return (dupe);
}
