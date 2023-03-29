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
	int j;
	int length;

	length = 0;
	i = 0;

	while (dest[i] != '\0')
	{
		length++;
		i++;
	}

	i = 0;
	j = length;

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}

	dest[j] = '\0';

	return (dest);
}	

