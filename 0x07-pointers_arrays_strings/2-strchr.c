#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string to locate a character in
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	int checker;

	checker = 0;
	while (*s)
	{
		if (*s == c)
		{
			checker = 1;
			break;
		}
		s++;
	}
	if (checker)
		return (s);
	else
		return (NULL);
}
