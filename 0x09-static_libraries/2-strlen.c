#include "main.h"
/**
 * _strlen - return length of string
 * @s: pointer to char
 *
 * Return: length number with null terminator
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
