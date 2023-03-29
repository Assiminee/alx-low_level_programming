#include "main.h"
/**
 * _strncat - concatenates two strings up to n char
 * @dest: destination string
 * @src: src string
 * @n: number of char to be appended
 *
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int length;

	length = 0;

	while (dest[length])
	{
		length++;
	}

	for (i = 0; i < n; i++)
	{
		dest[length] = src[i];
		length++;
	}

	dest[length] = '\0';
	return (dest);
}
