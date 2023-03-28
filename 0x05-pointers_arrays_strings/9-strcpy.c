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
	unsigned long int i;

	dest = malloc(strlen(src));
	if (dest == NULL)
	{
		return NULL;
	}

	for (i = 0; i < strlen(src); i++)
		dest[i] = src[i];

	dest[i] = '\0'; 
	return (dest);
}
