#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strcpy - copies src to dest including null terminating char
 * @dest: pointer to char. destination string.
 * @src: pointer to char. src string.
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
