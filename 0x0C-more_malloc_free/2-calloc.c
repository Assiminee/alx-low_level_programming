#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - allocates memory for an array and sets it to 0
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte to fill the memory area
 * @n: the first n bytes of memory to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;

	ptr = s;
	while (n)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
