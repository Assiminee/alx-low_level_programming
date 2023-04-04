#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates the first occurrence in s of any of the bytes in accept
 * @s: string to be searched
 * @accept: string of characters to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}
