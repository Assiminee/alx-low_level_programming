#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: pointer to the first element of the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
