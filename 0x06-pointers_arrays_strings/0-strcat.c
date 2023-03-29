#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to char
 * @src: pointer to char
 *
 * Return: pointer to char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int length;

	length = 0;

	while (dest[length])
	{
		length++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}

	dest[length] = '\0';

	return (dest);
}	

