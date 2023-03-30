#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: pointer to char
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
			{
				s[i] += 13;
				break;
			}
			s[i] -= 13;
			break;
		}
	}
	return (s);
}

