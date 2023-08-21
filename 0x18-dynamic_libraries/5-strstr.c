#include "main.h"
#include <stddef.h>
/**
 * _strstr - finds the first occurrence of substring needle in string haystack
 * @haystack: string to be searched
 * @needle: string to be searched for
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *hptr;
	char *nptr;

	while (*haystack)
	{
		hptr = haystack;
		nptr = needle;
		while (*nptr && *nptr == *hptr)
		{
			hptr++;
			nptr++;
		}
		if (*nptr == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
