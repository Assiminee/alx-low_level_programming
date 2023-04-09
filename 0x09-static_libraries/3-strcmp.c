#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to compare s1 to
 *
 * Return: 0 if s1 == s2, negative value if s1 < s2, positive value if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int counter;

	counter = 0;

	for (i = 0; s1[i]; i++)
	{
		counter += s1[i] - s2[i];
		if (s1[i] != s2[i])
			break;
	}
	return (counter);
}
