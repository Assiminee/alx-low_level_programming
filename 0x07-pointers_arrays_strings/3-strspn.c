#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string that contains the set of characters to search for
 *
 * Return: length of initial segment of s that contains only characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int counter;
	int checker;

	counter = 0;
	for (i = 0; s[i]; i++)
	{
		checker = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				checker = 1;
			}
			if (accept[j + 1] == '\0' && checker == 0)
			{
				return (counter);
			}
		}
	}
	return (counter);
}
