#include "main.h"
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
	char *ptr = s;

	while (n)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
